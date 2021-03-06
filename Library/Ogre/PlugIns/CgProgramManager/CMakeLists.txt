#-------------------------------------------------------------------
# This file is part of the CMake build system for OGRE
#     (Object-oriented Graphics Rendering Engine)
# For the latest info, see http://www.ogre3d.org/
#
# The contents of this file are placed in the public domain. Feel
# free to make use of it in any way you like.
#-------------------------------------------------------------------

# Configure CgProgramManager build

set (HEADER_FILES
  include/OgreCgFxScriptLoader.h
  include/OgreCgPlugin.h
  include/OgreCgPrerequisites.h
  include/OgreCgProgram.h
  include/OgreCgProgramFactory.h
)

set (SOURCE_FILES
  src/OgreCgFxScriptLoader.cpp
  src/OgreCgPlugin.cpp
  src/OgreCgProgram.cpp
  src/OgreCgProgramFactory.cpp
  src/OgreCgProgramManagerDll.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${Cg_INCLUDE_DIRS})
add_definitions(-D_USRDLL)

ogre_add_library(Plugin_CgProgramManager ${OGRE_LIB_TYPE} ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(Plugin_CgProgramManager OgreMain ${Cg_LIBRARIES})
if (NOT OGRE_STATIC)
  set_target_properties(Plugin_CgProgramManager PROPERTIES
    COMPILE_DEFINITIONS OGRE_CGPLUGIN_EXPORTS
  ) 
endif (NOT OGRE_STATIC)

ogre_config_framework(Plugin_CgProgramManager)

ogre_config_plugin(Plugin_CgProgramManager)
install(FILES ${HEADER_FILES} DESTINATION include/OGRE/Plugins/CgProgramManager)

