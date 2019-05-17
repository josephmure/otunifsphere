

ot_add_current_dir_to_include_dirs ()

ot_add_source_file ( UniformSphereRandomVector.cxx )

ot_install_header_file ( UniformSphereRandomVector.hxx )


include_directories (${INTERNAL_INCLUDE_DIRS})

add_library (otunifsphere ${SOURCEFILES})
set_target_properties (otunifsphere PROPERTIES POSITION_INDEPENDENT_CODE ON)
if (BUILD_SHARED_LIBS)
  set_target_properties (otunifsphere PROPERTIES COMPILE_DEFINITIONS "OTUNIFSPHERE_DLL_EXPORTS")
endif ()

if ( NOT DEFINED LIB_VERSION ) 
  set ( LIB_VERSION 0.0.0 )
endif ()
if ( NOT DEFINED LIB_SOVERSION ) 
  set ( LIB_SOVERSION 0 )
endif ()
set_target_properties ( otunifsphere PROPERTIES VERSION ${LIB_VERSION} )
set_target_properties ( otunifsphere PROPERTIES SOVERSION ${LIB_SOVERSION} )
target_link_libraries (otunifsphere ${OPENTURNS_LIBRARY})

# Add targets to the build-tree export set
export (TARGETS otunifsphere FILE ${PROJECT_BINARY_DIR}/otunifsphere-Targets.cmake)

# Install the export set for use with the install-tree
install(EXPORT otunifsphere-Targets
        DESTINATION "${OTUNIFSPHERE_CONFIG_CMAKE_PATH}"
        COMPONENT Development)

install(TARGETS otunifsphere
        EXPORT  otunifsphere-Targets 
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION ${OTUNIFSPHERE_LIBRARY_PATH}
        ARCHIVE DESTINATION ${OTUNIFSPHERE_LIBRARY_PATH}
)

