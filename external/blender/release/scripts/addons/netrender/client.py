# ##### BEGIN GPL LICENSE BLOCK #####
#
#  This program is free software; you can redistribute it and/or
#  modify it under the terms of the GNU General Public License
#  as published by the Free Software Foundation; either version 2
#  of the License, or (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software Foundation,
#  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
# ##### END GPL LICENSE BLOCK #####

import bpy
import os, re
import http, http.client, http.server
import time
import json

import netrender
import netrender.model
import netrender.slave as slave
import netrender.master as master
from netrender.utils import *

def addFluidFiles(job, path):
    if os.path.exists(path):
        pattern = re.compile("fluidsurface_(final|preview)_([0-9]+)\.(bobj|bvel)\.gz")

        for fluid_file in sorted(os.listdir(path)):
            match = pattern.match(fluid_file)

            if match:
                # fluid frames starts at 0, which explains the +1
                # This is stupid
                current_frame = int(match.groups()[1]) + 1
                job.addFile(path + fluid_file, current_frame, current_frame)

def addPointCache(job, ob, point_cache, default_path):
    if not point_cache.use_disk_cache:
        return


    name = point_cache.name
    if name == "":
        name = "".join(["%02X" % ord(c) for c in ob.name])

    cache_path = bpy.path.abspath(point_cache.filepath) if point_cache.use_external else default_path

    index = "%02i" % point_cache.index

    if os.path.exists(cache_path):
        pattern = re.compile(name + "_([0-9]+)_" + index + "\.bphys")

        cache_files = []

        for cache_file in sorted(os.listdir(cache_path)):
            match = pattern.match(cache_file)

            if match:
                cache_frame = int(match.groups()[0])
                cache_files.append((cache_frame, cache_file))

        cache_files.sort()

        if len(cache_files) == 1:
            cache_frame, cache_file = cache_files[0]
            job.addFile(cache_path + cache_file, cache_frame, cache_frame)
        else:
            for i in range(len(cache_files)):
                current_item = cache_files[i]
                next_item = cache_files[i+1] if i + 1 < len(cache_files) else None
                previous_item = cache_files[i - 1] if i > 0 else None

                current_frame, current_file = current_item

                if  not next_item and not previous_item:
                    job.addFile(cache_path + current_file, current_frame, current_frame)
                elif next_item and not previous_item:
                    next_frame = next_item[0]
                    job.addFile(cache_path + current_file, current_frame, next_frame - 1)
                elif not next_item and previous_item:
                    previous_frame = previous_item[0]
                    job.addFile(cache_path + current_file, previous_frame + 1, current_frame)
                else:
                    next_frame = next_item[0]
                    previous_frame = previous_item[0]
                    job.addFile(cache_path + current_file, previous_frame + 1, next_frame - 1)

def fillCommonJobSettings(job, job_name, netsettings):
    job.name = job_name
    job.category = netsettings.job_category

    for bad_slave in netrender.blacklist:
        job.blacklist.append(bad_slave.id)

    job.chunks = netsettings.chunks
    job.priority = netsettings.priority
    
    if netsettings.job_type == "JOB_BLENDER":
        job.type = netrender.model.JOB_BLENDER
    elif netsettings.job_type == "JOB_PROCESS":
        job.type = netrender.model.JOB_PROCESS
    elif netsettings.job_type == "JOB_VCS":
        job.type = netrender.model.JOB_VCS

def clientSendJob(conn, scene, anim = False):
    netsettings = scene.network_render
    if netsettings.job_type == "JOB_BLENDER":
        return clientSendJobBlender(conn, scene, anim)
    elif netsettings.job_type == "JOB_VCS":
        return clientSendJobVCS(conn, scene, anim)

def clientSendJobVCS(conn, scene, anim = False):
    netsettings = scene.network_render
    job = netrender.model.RenderJob()

    if anim:
        for f in range(scene.frame_start, scene.frame_end + 1):
            job.addFrame(f)
    else:
        job.addFrame(scene.frame_current)

    filename = bpy.data.filepath
    
    if not filename.startswith(netsettings.vcs_wpath):
        # this is an error, need better way to handle this
        return

    filename = filename[len(netsettings.vcs_wpath):]
    
    if filename[0] in (os.sep, os.altsep):
        filename = filename[1:]
    
    print("CREATING VCS JOB", filename)
    
    job.addFile(filename, signed=False)

    job_name = netsettings.job_name
    path, name = os.path.split(filename)
    if job_name == "[default]":
        job_name = name


    fillCommonJobSettings(job, job_name, netsettings)
    
    # VCS Specific code
    job.version_info = netrender.model.VersioningInfo()
    job.version_info.system = netsettings.vcs_system
    job.version_info.wpath = netsettings.vcs_wpath
    job.version_info.rpath = netsettings.vcs_rpath
    job.version_info.revision = netsettings.vcs_revision

    # try to send path first
    conn.request("POST", "/job", json.dumps(job.serialize()))
    response = conn.getresponse()
    response.read()

    job_id = response.getheader("job-id")
    
    # a VCS job is always good right now, need error handling

    return job_id

def clientSendJobBlender(conn, scene, anim = False):
    netsettings = scene.network_render
    job = netrender.model.RenderJob()

    if anim:
        for f in range(scene.frame_start, scene.frame_end + 1):
            job.addFrame(f)
    else:
        job.addFrame(scene.frame_current)

    filename = bpy.data.filepath
    
    if not os.path.exists(filename):
        raise RuntimeError("Current file path not defined\nSave your file before sending a job")
    
    job.addFile(filename)

    job_name = netsettings.job_name
    path, name = os.path.split(filename)
    if job_name == "[default]":
        job_name = name

    ###########################
    # LIBRARIES
    ###########################
    for lib in bpy.data.libraries:
        file_path = bpy.path.abspath(lib.filepath)
        if os.path.exists(file_path):
            job.addFile(file_path)

    ###########################
    # IMAGES
    ###########################
    for image in bpy.data.images:
        if image.source == "FILE" and not image.packed_file:
            file_path = bpy.path.abspath(image.filepath)
            if os.path.exists(file_path):
                job.addFile(file_path)
                
                tex_path = os.path.splitext(file_path)[0] + ".tex"
                if os.path.exists(tex_path):
                    job.addFile(tex_path)

    ###########################
    # FLUID + POINT CACHE
    ###########################
    root, ext = os.path.splitext(name)
    default_path = path + os.sep + "blendcache_" + root + os.sep # need an API call for that

    for object in bpy.data.objects:
        for modifier in object.modifiers:
            if modifier.type == 'FLUID_SIMULATION' and modifier.settings.type == "DOMAIN":
                addFluidFiles(job, bpy.path.abspath(modifier.settings.filepath))
            elif modifier.type == "CLOTH":
                addPointCache(job, object, modifier.point_cache, default_path)
            elif modifier.type == "SOFT_BODY":
                addPointCache(job, object, modifier.point_cache, default_path)
            elif modifier.type == "SMOKE" and modifier.smoke_type == "TYPE_DOMAIN":
                addPointCache(job, object, modifier.domain_settings.point_cache, default_path)
            elif modifier.type == "MULTIRES" and modifier.is_external:
                file_path = bpy.path.abspath(modifier.filepath)
                job.addFile(file_path)

        # particles modifier are stupid and don't contain data
        # we have to go through the object property
        for psys in object.particle_systems:
            addPointCache(job, object, psys.point_cache, default_path)

    #print(job.files)

    fillCommonJobSettings(job, job_name, netsettings)

    # try to send path first
    conn.request("POST", "/job", json.dumps(job.serialize()))
    response = conn.getresponse()
    response.read()

    job_id = response.getheader("job-id")

    # if not ACCEPTED (but not processed), send files
    if response.status == http.client.ACCEPTED:
        for rfile in job.files:
            f = open(rfile.filepath, "rb")
            conn.request("PUT", fileURL(job_id, rfile.index), f)
            f.close()
            response = conn.getresponse()
            response.read()

    # server will reply with ACCEPTED until all files are found

    return job_id

def requestResult(conn, job_id, frame):
    conn.request("GET", renderURL(job_id, frame))

class NetworkRenderEngine(bpy.types.RenderEngine):
    bl_idname = 'NET_RENDER'
    bl_label = "Network Render"
    bl_use_postprocess = False
    def render(self, scene):
        try:
            if scene.network_render.mode == "RENDER_CLIENT":
                self.render_client(scene)
            elif scene.network_render.mode == "RENDER_SLAVE":
                self.render_slave(scene)
            elif scene.network_render.mode == "RENDER_MASTER":
                self.render_master(scene)
            else:
                print("UNKNOWN OPERATION MODE")
        except Exception as e:
            self.report('ERROR', str(e))
            raise e

    def render_master(self, scene):
        netsettings = scene.network_render

        address = "" if netsettings.server_address == "[default]" else netsettings.server_address

        master.runMaster((address, netsettings.server_port), netsettings.use_master_broadcast, netsettings.use_master_clear, bpy.path.abspath(netsettings.path), self.update_stats, self.test_break)


    def render_slave(self, scene):
        slave.render_slave(self, scene.network_render, scene.render.threads)

    def render_client(self, scene):
        netsettings = scene.network_render
        self.update_stats("", "Network render client initiation")


        conn = clientConnection(netsettings.server_address, netsettings.server_port)

        if conn:
            # Sending file

            self.update_stats("", "Network render exporting")

            new_job = False

            job_id = netsettings.job_id

            # reading back result

            self.update_stats("", "Network render waiting for results")
            
             
            requestResult(conn, job_id, scene.frame_current)
            response = conn.getresponse()
            buf = response.read()

            if response.status == http.client.NO_CONTENT:
                new_job = True
                netsettings.job_id = clientSendJob(conn, scene)
                job_id = netsettings.job_id

                requestResult(conn, job_id, scene.frame_current)
                response = conn.getresponse()
                buf = response.read()
                
            while response.status == http.client.ACCEPTED and not self.test_break():
                time.sleep(1)
                requestResult(conn, job_id, scene.frame_current)
                response = conn.getresponse()
                buf = response.read()

            # cancel new jobs (animate on network) on break
            if self.test_break() and new_job:
                conn.request("POST", cancelURL(job_id))
                response = conn.getresponse()
                response.read()
                print( response.status, response.reason )
                netsettings.job_id = 0

            if response.status != http.client.OK:
                conn.close()
                return

            r = scene.render
            x= int(r.resolution_x*r.resolution_percentage*0.01)
            y= int(r.resolution_y*r.resolution_percentage*0.01)
            
            result_path = os.path.join(bpy.path.abspath(netsettings.path), "output.exr")
            
            folder = os.path.split(result_path)[0]
            
            if not os.path.exists(folder):
                os.mkdir(folder)

            f = open(result_path, "wb")

            f.write(buf)

            f.close()

            result = self.begin_result(0, 0, x, y)
            result.load_from_file(result_path)
            self.end_result(result)

            conn.close()

def compatible(module):
    module = __import__("bl_ui." + module)
    for subclass in module.__dict__.values():
        try:		subclass.COMPAT_ENGINES.add('NET_RENDER')
        except:	pass
    del module

compatible("properties_world")
compatible("properties_material")
compatible("properties_data_mesh")
compatible("properties_data_camera")
compatible("properties_texture")
