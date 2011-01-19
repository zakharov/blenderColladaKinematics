/**
 * $Id: DocumentImporter.h 33668 2010-12-14 21:46:03Z jesterking $
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Contributor(s): Chingiz Dyussenov, Arystanbek Dyussenov.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#ifndef __DOCUMENTIMPORTER_H__
#define __DOCUMENTIMPORTER_H__

#include <iostream>
#include <COLLADAFWIWriter.h>

struct bContext;

class DocumentImporter : COLLADAFW::IWriter
{
 private:
    
    std::string mFilename;

    bContext *mContext;

    
 public:
	/** Constructor */
	DocumentImporter(bContext *C, const char *filename);

	/** Destructor */
	~DocumentImporter();

	/** Function called by blender UI */
	bool import();

	
	/** This method will be called if an error in the loading process occurred and the loader cannot
	    continue to load. The writer should undo all operations that have been performed.
            @param errorMessage A message containing informations about the error that occurred.
	*/
	void cancel(const COLLADAFW::String& errorMessage);

	/** This is the method called. The writer hast to prepare to receive data.*/
	void start();

	/** This method is called after the last write* method. No other methods will be called after this.*/
	void finish();
	
	bool writeGlobalAsset(const COLLADAFW::FileInfo*);

	bool writeScene(const COLLADAFW::Scene*);

	bool writeVisualScene(const COLLADAFW::VisualScene*);

	bool writeLibraryNodes(const COLLADAFW::LibraryNodes*);

	bool writeAnimation(const COLLADAFW::Animation*);

	bool writeAnimationList(const COLLADAFW::AnimationList*);

	bool writeGeometry(const COLLADAFW::Geometry*);

	bool writeMaterial(const COLLADAFW::Material*);

	bool writeEffect(const COLLADAFW::Effect*);

	bool writeCamera(const COLLADAFW::Camera*);

	bool writeImage(const COLLADAFW::Image*);

	bool writeLight(const COLLADAFW::Light*);

	bool writeSkinControllerData(const COLLADAFW::SkinControllerData*);

	bool writeController(const COLLADAFW::Controller*);

	bool writeFormulas(const COLLADAFW::Formulas*);

	bool writeKinematicsScene(const COLLADAFW::KinematicsScene*);


};

#endif
