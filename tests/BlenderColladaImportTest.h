/*
    Copyright (c) 2010 Alexey Zakharov
    Email alexey.zakharov@gmail.com
    
    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#ifndef TEST_BlenderColladaImportTest
#define TEST_BlenderColladaImportTest

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <string>

namespace unitTests {

class BlenderColladaImportTest : public CPPUNIT_NS::TestFixture {
	CPPUNIT_TEST_SUITE(BlenderColladaImportTest);
	CPPUNIT_TEST(testAllModels);
	CPPUNIT_TEST_SUITE_END();
public:
	void setUp();
	void tearDown();
	void testAllModels();
private:
	bool testModel(const std::string& name);
	std::string path;
};

}
#endif /*BLENDERCOLLADAIMPORTTEST*/
