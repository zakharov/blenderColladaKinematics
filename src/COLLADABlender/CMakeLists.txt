SET (name COLLADABlender)
PROJECT(${name})

SET(libColladaBlender_include_dirs
	${CMAKE_CURRENT_SOURCE_DIR}
	${BLENDER_INCLUDE_DIRS}
)

SET(libColladaBlender_src_dirs 
	${CMAKE_CURRENT_SOURCE_DIR}
)

SET(libColladaBlender_src_files 
	${libColladaBlender_src_dirs}/DocumentImporter.cpp
)

SET(libColladaBlender_libs
	${OPENCOLLADA_LIBRARIES}
)

INCLUDE_DIRECTORIES(
	${libColladaBlender_include_dirs} 
	${OPENCOLLADA_INCLUDE_DIR}
)
MESSAGE(${OPENCOLLADA_LIB_DIR})
LINK_DIRECTORIES(${OPENCOLLADA_LIB_DIR})
ADD_LIBRARY(${name} ${libColladaBlender_src_files})
TARGET_LINK_LIBRARIES(${name} ${libColladaBlender_libs})

