project(zlib)

set(zlib_SOURCES
  adler32.c
  compress.c
  crc32.c
  crc32.h
  deflate.c
  deflate.h
  gzclose.c
  gzguts.h
  gzlib.c
  gzread.c
  gzwrite.c
  infback.c
  inffast.c
  inffast.h
  inffixed.h
  inflate.c
  inflate.h
  inftrees.c
  inftrees.h
  trees.c
  trees.h
  uncompr.c
  zconf.h
  zlib.h
  zutil.c
  zutil.h
)

add_library(zlib STATIC ${zlib_SOURCES})

set(ZLIB_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "" FORCE)
set(ZLIB_LIBRARY_DBG "zlib" CACHE STRING "" FORCE)
set(ZLIB_LIBRARY_REL "zlib" CACHE STRING "" FORCE)
mark_as_advanced(ZLIB_INCLUDE_DIR ZLIB_LIBRARY_DBG ZLIB_LIBRARY_REL)
