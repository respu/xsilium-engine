
include_directories(${PagedGeometry_SOURCE_DIR}/include)
include_directories(${PagedGeometry_BINARY_DIR}/include)
include_directories(${OGRE_H_PATH})

FILE(GLOB sources *.cpp ${PagedGeometry_SOURCE_DIR}/include/*.h)

set(LIBNAME "PagedGeometry")

ADD_LIBRARY(${LIBNAME} STATIC ${sources})
