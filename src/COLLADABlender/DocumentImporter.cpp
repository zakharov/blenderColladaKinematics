/**
 * $Id: DocumentImporter.cpp 34159 2011-01-07 18:36:47Z campbellbarton $
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
 * Contributor(s): Chingiz Dyussenov, Arystanbek Dyussenov, Nathan Letwory.
 *
 * ***** END GPL LICENSE BLOCK *****
 */
// TODO:
// * name imported objects
// * import object rotation as euler

#include <GeneratedSaxParserCoutErrorHandler.h>
#include <COLLADASaxFWLLoader.h>
#include <COLLADAFWRoot.h>

#include "BKE_scene.h"
#include "BKE_context.h"
#include "DocumentImporter.h"


	/** Constructor. */
	DocumentImporter::DocumentImporter(bContext *C, const char *filename) {}

	/** Destructor. */
	DocumentImporter::~DocumentImporter() {}

	bool DocumentImporter::import()
	{
		
		return true;
	}
	
	void DocumentImporter::cancel(const COLLADAFW::String& errorMessage)
	{
		
	}

	void DocumentImporter::start(){

	}

	/** This method is called after the last write* method. No other methods will be called after this.*/
	void DocumentImporter::finish()
	{
		
	}


	/** When this method is called, the writer must write the global document asset.
	@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeGlobalAsset ( const COLLADAFW::FileInfo* asset ) 
	{
		

		return true;
	}

	/** When this method is called, the writer must write the scene.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeScene ( const COLLADAFW::Scene* scene ) 
	{
		// XXX could store the scene id, but do nothing for now
		return true;
	}
	
	

	/** When this method is called, the writer must write the entire visual scene.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeVisualScene ( const COLLADAFW::VisualScene* visualScene ) 
	{
		// this method called on post process after writeGeometry, writeMaterial, etc.

		// for each <node> in <visual_scene>:
		// create an Object
		// if Mesh (previously created in writeGeometry) to which <node> corresponds exists, link Object with that mesh

		// update: since we cannot link a Mesh with Object in
		// writeGeometry because <geometry> does not reference <node>,
		// we link Objects with Meshes here

		
		
		return true;
	}

	/** When this method is called, the writer must handle all nodes contained in the 
		library nodes.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeLibraryNodes ( const COLLADAFW::LibraryNodes* libraryNodes ) 
	{
		

		return true;
	}

	/** When this method is called, the writer must write the geometry.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeGeometry ( const COLLADAFW::Geometry* geom ) 
	{
		return true;
	}

	/** When this method is called, the writer must write the material.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeMaterial( const COLLADAFW::Material* cmat ) 
	{
		
		
		return true;
	}
	
		
		
	/** When this method is called, the writer must write the effect.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	
	bool DocumentImporter::writeEffect( const COLLADAFW::Effect* effect ) 
	{
				
		return true;
	}
	
	
	/** When this method is called, the writer must write the camera.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeCamera( const COLLADAFW::Camera* camera ) 
	{
		
		return true;
	}

	/** When this method is called, the writer must write the image.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeImage( const COLLADAFW::Image* image ) 
	{
		
		return true;
	}

	/** When this method is called, the writer must write the light.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeLight( const COLLADAFW::Light* light ) 
	{
		
		return true;
	}
	
	// this function is called only for animations that pass COLLADAFW::validate
	bool DocumentImporter::writeAnimation( const COLLADAFW::Animation* anim ) 
	{
		return true;
		
	}
	
	// called on post-process stage after writeVisualScenes
	bool DocumentImporter::writeAnimationList( const COLLADAFW::AnimationList* animationList ) 
	{
		return true;
		
	}
	
	/** When this method is called, the writer must write the skin controller data.
		@return The writer should return true, if writing succeeded, false otherwise.*/
	bool DocumentImporter::writeSkinControllerData( const COLLADAFW::SkinControllerData* skin ) 
	{
		return true;
	}

	// this is called on postprocess, before writeVisualScenes
	bool DocumentImporter::writeController( const COLLADAFW::Controller* controller ) 
	{
		return true;
	}

	bool DocumentImporter::writeFormulas( const COLLADAFW::Formulas* formulas )
	{
		return true;
	}

	bool DocumentImporter::writeKinematicsScene( const COLLADAFW::KinematicsScene* kinematicsScene )
	{
		return true;
	}



