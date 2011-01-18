SET (name COLLADAValidator)
PROJECT(${name})

SET(libValidator_include_dirs
	${CMAKE_CURRENT_SOURCE_DIR}
)

SET(libValidator_src_dirs 
	${CMAKE_CURRENT_SOURCE_DIR}
)

SET(libValidator_src_files 
	${libValidator_src_dirs}/ValidationErrorHandler.cpp
)

SET(libValidator_libs
	${OPENCOLLADA_LIBRARIES}
)

INCLUDE_DIRECTORIES(
	${libValidator_include_dirs} 
	${OPENCOLLADA_INCLUDE_DIR}
)
MESSAGE(${OPENCOLLADA_LIB_DIR})
LINK_DIRECTORIES(${OPENCOLLADA_LIB_DIR})
ADD_LIBRARY(${name} ${libValidator_src_files})
TARGET_LINK_LIBRARIES(${name} ${libValidator_libs})

