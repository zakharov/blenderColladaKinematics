/*
    Copyright (c) 2010 Alexey Zakharov
    Email alexey.zakharov@gmail.com
    
    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#include "blenkernel/BKE_scene.h"
#include "blenkernel/BKE_context.h"
#include "COLLADABlender/DocumentImporter.h"

using namespace std;

namespace unitTests {

CPPUNIT_TEST_SUITE_REGISTRATION(BlenderColladaImportTest);

bool ColladaValidationTest::testModel(const string& name) {
	cout << "<---Starting to test " << name << "---> " << endl;
	bContext context
	DocumentImporter import (context, path+name);
	return import.import();
}

void ColladaValidationTest::setUp(){
	path = string(KINEMATICS_MODELS_DIR);
}

void ColladaValidationTest::tearDown(){
	
}

void ColladaValidationTest::testAllModels() {
	CPPUNIT_ASSERT(testModel("/simple/simple.dae"));
	CPPUNIT_ASSERT(testModel("/blocks/blocks.dae"));
	CPPUNIT_ASSERT(testModel("/kukayoubot/youbot.dae"));
	CPPUNIT_ASSERT(testModel("/kr150/kr150.dae"));
	CPPUNIT_ASSERT(testModel("/ir663/ir663.dae"));
	CPPUNIT_ASSERT(testModel("/cob3/cob3.dae"));
	CPPUNIT_ASSERT(testModel("/barrettwam/barrettwam.dae"));
	CPPUNIT_ASSERT(testModel("/pr2/pr2-beta-static.dae"));
	CPPUNIT_ASSERT(testModel("/schunkSAHrobot/schunkSAHrobot.dae"));
	CPPUNIT_ASSERT(testModel("/kr210L180/kr210L180.dae"));
	CPPUNIT_ASSERT(testModel("/simpleArm/simpleArm.dae"));
	CPPUNIT_ASSERT(testModel("/zange/zange.dae"));
	CPPUNIT_ASSERT(testModel("/greifer/greifer.dae"));
}

}
