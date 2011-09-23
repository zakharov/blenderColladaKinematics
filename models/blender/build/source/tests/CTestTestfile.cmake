# CMake generated Testfile for 
# Source directory: /home/anton/workspace/blender/source/tests
# Build directory: /home/anton/workspace/blender/build/source/tests
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(import_obj_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.obj(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/obj/cube.obj')" "--md5=4d090508b812b5e08168aa2614746bda" "--md5_method=SCENE")
ADD_TEST(import_obj_nurbs_cyclic "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.obj(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/obj/nurbs_cyclic.obj')" "--md5=9e0da7b65b4c4f818a203d56af2d3a4b" "--md5_method=SCENE" "--write-blend=/root/foo99.blend")
ADD_TEST(import_obj_makehuman "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.obj(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/obj/makehuman.obj')" "--md5=e0829dc078b0789e1d81f1071235bc4f" "--md5_method=SCENE")
ADD_TEST(export_obj_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.obj(filepath='/home/anton/workspace/blender/build/tests/export_obj_cube.obj',use_selection=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_obj_cube.obj" "--md5_source=/home/anton/workspace/blender/build/tests/export_obj_cube.mtl" "--md5=70bdc394c2726203ad26c085176e3484" "--md5_method=FILE")
ADD_TEST(export_obj_nurbs "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.obj(filepath='/home/anton/workspace/blender/build/tests/export_obj_nurbs.obj',use_selection=False,use_nurbs=True)" "--md5_source=/home/anton/workspace/blender/build/tests/export_obj_nurbs.obj" "--md5_source=/home/anton/workspace/blender/build/tests/export_obj_nurbs.mtl" "--md5=a733ae4fa4a591ea9b0912da3af042de" "--md5_method=FILE")
ADD_TEST(export_obj_all_objects "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.obj(filepath='/home/anton/workspace/blender/build/tests/export_obj_all_objects.obj',use_selection=False,use_nurbs=True)" "--md5_source=/home/anton/workspace/blender/build/tests/export_obj_all_objects.obj" "--md5_source=/home/anton/workspace/blender/build/tests/export_obj_all_objects.mtl" "--md5=6e033a6a9c923d7aa3613b36e373f55b" "--md5_method=FILE")
ADD_TEST(import_ply_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.ply(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/ply/cube_ascii.ply')" "--md5=527134343c27fc0ea73115b85fbfd3ac" "--md5_method=SCENE")
ADD_TEST(import_ply_bunny "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.ply(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/ply/bunny2.ply')" "--md5=6ea5b8533400a17accf928b8fd024eaa" "--md5_method=SCENE")
ADD_TEST(import_ply_small_holes "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.ply(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/ply/many_small_holes.ply')" "--md5=c3093e26ecae5b6d59fbbcf2a0d0b39f" "--md5_method=SCENE")
ADD_TEST(import_stl_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.stl(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/stl/cube.stl')" "--md5=8ceb5bb7e1cb5f4342fa1669988c66b4" "--md5_method=SCENE")
ADD_TEST(import_stl_conrod "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.stl(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/stl/conrod.stl')" "--md5=690a4b8eb9002dcd8631c5a575ea7348" "--md5_method=SCENE")
ADD_TEST(import_stl_knot_max_simplified "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_mesh.stl(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/stl/knot_max_simplified.stl')" "--md5=baf82803f45a84ec4ddbad9cef57dd3e" "--md5_method=SCENE")
ADD_TEST(import_x3d_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.x3d(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/x3d/color_cube.x3d')" "--md5=c80538e272812c9d765d43df269d8a9b" "--md5_method=SCENE")
ADD_TEST(import_x3d_teapot "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.x3d(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/x3d/teapot.x3d')" "--md5=fa19713ff71d4b3893dcbe0ab3a73955" "--md5_method=SCENE" "--write-blend=/root/foo99.blend")
ADD_TEST(import_x3d_suzanne_material "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.x3d(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/x3d/suzanne_material.x3d')" "--md5=52a59dcf731904ac49953dd82c020ae5" "--md5_method=SCENE")
ADD_TEST(export_x3d_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.x3d(filepath='/home/anton/workspace/blender/build/tests/export_x3d_cube.x3d',use_selection=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_x3d_cube.x3d" "--md5=560ba3762a6604669994f661235ef93c" "--md5_method=FILE")
ADD_TEST(export_x3d_nurbs "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.x3d(filepath='/home/anton/workspace/blender/build/tests/export_x3d_nurbs.x3d',use_selection=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_x3d_nurbs.x3d" "--md5=078c0ca5a08f123cd2cdac48afb54853" "--md5_method=FILE")
ADD_TEST(export_x3d_all_objects "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.x3d(filepath='/home/anton/workspace/blender/build/tests/export_x3d_all_objects.x3d',use_selection=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_x3d_all_objects.x3d" "--md5=5f8153d1475e187efca15dcb029d280d" "--md5_method=FILE")
ADD_TEST(import_3ds_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.autodesk_3ds(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/3ds/cube.3ds')" "--md5=cb5a45c35a343c3f5beca2a918472951" "--md5_method=SCENE")
ADD_TEST(import_3ds_hierarchy_lara "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.autodesk_3ds(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/3ds/hierarchy_lara.3ds')" "--md5=2e9812099b26ad607fdcf4c7be918c71" "--md5_method=SCENE" "--write-blend=/root/foo99.blend")
ADD_TEST(import_3ds_hierarchy_greek_trireme "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.import_scene.autodesk_3ds(filepath='/home/anton/workspace/blender/../lib/tests/io_tests/3ds/hierarchy_greek_trireme.3ds')" "--md5=d05b922d7be20356d8409d1f768a3a9a" "--md5_method=SCENE")
ADD_TEST(export_3ds_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.autodesk_3ds(filepath='/home/anton/workspace/blender/build/tests/export_3ds_cube.3ds',use_selection=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_3ds_cube.3ds" "--md5=0df6cfb130052d01e31ef77d391d4cc0" "--md5_method=FILE")
ADD_TEST(export_3ds_nurbs "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.autodesk_3ds(filepath='/home/anton/workspace/blender/build/tests/export_3ds_nurbs.3ds',use_selection=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_3ds_nurbs.3ds" "--md5=ba1a6d43346fee3bcadc7e30e3c95935" "--md5_method=FILE")
ADD_TEST(export_3ds_all_objects "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.autodesk_3ds(filepath='/home/anton/workspace/blender/build/tests/export_3ds_all_objects.3ds',use_selection=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_3ds_all_objects.3ds" "--md5=87349a4699f1006e8194fb0ac05ac9c8" "--md5_method=FILE")
ADD_TEST(export_fbx_cube "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/all_quads.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.fbx(filepath='/home/anton/workspace/blender/build/tests/export_fbx_cube.fbx',use_selection=False,use_metadata=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_fbx_cube.fbx" "--md5=a0806dc974d814f338b821ab326a6be0" "--md5_method=FILE")
ADD_TEST(export_fbx_nurbs "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_geometry/nurbs.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.fbx(filepath='/home/anton/workspace/blender/build/tests/export_fbx_nurbs.fbx',use_selection=False,use_metadata=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_fbx_nurbs.fbx" "--md5=2cda2b37ee6698aff4129af48fce1291" "--md5_method=FILE")
ADD_TEST(export_fbx_all_objects "/home/anton/workspace/blender/build/bin/blender" "--background" "--factory-startup" "--env-system-scripts" "/home/anton/workspace/blender/release/scripts" "/home/anton/workspace/blender/../lib/tests/io_tests/blend_scene/all_objects.blend" "--python" "/bl_test.py" "--" "--run={'FINISHED'}&bpy.ops.export_scene.fbx(filepath='/home/anton/workspace/blender/build/tests/export_fbx_all_objects.fbx',use_selection=False,use_metadata=False)" "--md5_source=/home/anton/workspace/blender/build/tests/export_fbx_all_objects.fbx" "--md5=be69cf0baf51dcf43f579183310cb383" "--md5_method=FILE")