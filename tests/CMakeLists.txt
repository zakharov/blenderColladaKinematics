# add include directories
INCLUDE_DIRECTORIES(
    ${CMAKE_HOME_DIRECTORY}/src 
    ${CPPUNIT_INCLUDE_DIR}
    ${OPENCOLLADA_INCLUDE_DIR}
)

# add library directories (-L)
LINK_DIRECTORIES(
    ${CMAKE_HOME_DIRECTORY}/lib
)

# automatically search for cppUnit tests in this folder
# NOTE: all test must end with Test.cpp e.g. Point3DTest.cpp
FILE(GLOB CPPUNITTEST_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*Test.cpp" )
MESSAGE("CppUnitTests: ${CPPUNITTEST_SOURCES}")

# compile unit testing executable
LINK_DIRECTORIES(${OPENCOLLADA_LIB_DIR})
ADD_EXECUTABLE(run_unit_tests TestRunner.cpp ${CPPUNITTEST_SOURCES})
TARGET_LINK_LIBRARIES(run_unit_tests ${CPPUNIT_LIBRARIES} COLLADAValidator)

