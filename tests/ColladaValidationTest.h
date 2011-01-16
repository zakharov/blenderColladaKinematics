/*
    Copyright (c) 2010 Alexey Zakharov
    Email alexey.zakharov@gmail.com
    
    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#ifndef TEST_ColladaValidationTest
#define TEST_ColladaValidationTest

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <string>

class ValidationErrorHandler;

namespace unitTests {

class ColladaValidationTest : public CPPUNIT_NS::TestFixture {
	CPPUNIT_TEST_SUITE(ColladaValidationTest);
	CPPUNIT_TEST(testAllModels);
	CPPUNIT_TEST_SUITE_END();
public:
	void setUp();
	void tearDown();
	void testAllModels();
private:
	void parse(const std::string& fileName, ValidationErrorHandler& errorHandler);
	bool testModel(const std::string& name);
	std::string path;
};

}
#endif /*COLLADAVALIDATIONTEST*/
