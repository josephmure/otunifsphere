
add_subdirectory ( include )
add_subdirectory ( src )
add_subdirectory ( test )

install ( FILES ${HEADERFILES}
  DESTINATION ${OTUNIFSPHERE_INCLUDE_PATH}/${PACKAGE_NAME}
        )

