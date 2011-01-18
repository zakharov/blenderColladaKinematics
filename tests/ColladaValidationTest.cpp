/*
    Copyright (c) 2010 Alexey Zakharov
    Email alexey.zakharov@gmail.com
    
    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#include <iostream>
#include <string>

#include <GeneratedSaxParserCoutErrorHandler.h>
#include <COLLADASaxFWLLoader.h>
#include <COLLADAFWRoot.h>

#include "COLLADAValidator/ValidationErrorHandler.h"
#include "COLLADAValidator/Writer.h"
#include "ColladaValidationTest.h"


using namespace std;

namespace unitTests {

CPPUNIT_TEST_SUITE_REGISTRATION(ColladaValidationTest);

COLLADASaxFWL::COLLADAVersion version = COLLADASaxFWL::COLLADA_UNKNOWN;
void ColladaValidationTest::parse(const string& fileName, ValidationErrorHandler& errorHandler)
{
	COLLADASaxFWL::Loader loader(&errorHandler);
	Writer writer;

	COLLADAFW::Root root(&loader, &writer);
	root.loadDocument(fileName.c_str());
	version = loader.getCOLLADAVersion();
}

bool ColladaValidationTest::testModel(const string& name){
	cout << "<---Starting to test " << name << "---> " << endl;
	ValidationErrorHandler errorHandler;
	parse(path+name, errorHandler);

	if (errorHandler.hasHandledSaxParserError() || errorHandler.getFileNotFound()) {
		return false;
	} else {
		std::cout << "\"" << name<< "\" is valid against the COLLADA ";
		switch (version) {
			case COLLADASaxFWL::COLLADA_14:
				std::cout << "1.4.1";
				break;
			case COLLADASaxFWL::COLLADA_15:
				std::cout << "1.5.0";
				break;
		}
			std::cout << " schema." << std::endl;
			return true;
	}
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
