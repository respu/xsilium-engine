set (CEGUI_TARGET_NAME ${CEGUI_XERCES_PARSER_LIBNAME})

cegui_gather_files()
cegui_add_loadable_module(${CEGUI_TARGET_NAME} CORE_SOURCE_FILES CORE_HEADER_FILES)
cegui_add_dependency(${CEGUI_TARGET_NAME} XERCESC)

cegui_target_link_libraries(${CEGUI_TARGET_NAME} ${CEGUI_BASE_LIBNAME})

if (APPLE AND CEGUI_BUILD_SHARED_LIBS_WITH_STATIC_DEPENDENCIES)
    set_property(TARGET ${CEGUI_TARGET_NAME} APPEND PROPERTY LINK_FLAGS "-framework Carbon")
endif()

