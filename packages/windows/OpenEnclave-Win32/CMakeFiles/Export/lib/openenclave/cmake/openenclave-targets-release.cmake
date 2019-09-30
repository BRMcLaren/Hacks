#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "openenclave::oehost" for configuration "Release"
set_property(TARGET openenclave::oehost APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oehost PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "ASM_MASM;C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/host/oehost.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oehost )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oehost "${_IMPORT_PREFIX}/lib/openenclave/host/oehost.lib" )

# Import target "openenclave::oehostverify" for configuration "Release"
set_property(TARGET openenclave::oehostverify APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oehostverify PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/host/oehostverify.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oehostverify )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oehostverify "${_IMPORT_PREFIX}/lib/openenclave/host/oehostverify.lib" )

# Import target "openenclave::oesign" for configuration "Release"
set_property(TARGET openenclave::oesign APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oesign PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/oesign.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oesign )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oesign "${_IMPORT_PREFIX}/bin/oesign.exe" )

# Import target "openenclave::oecore" for configuration "Release"
set_property(TARGET openenclave::oecore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oecore PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboecore.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oecore )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oecore "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboecore.a" )

# Import target "openenclave::oecryptombed" for configuration "Release"
set_property(TARGET openenclave::oecryptombed APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oecryptombed PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboecryptombed.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oecryptombed )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oecryptombed "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboecryptombed.a" )

# Import target "openenclave::oeenclave" for configuration "Release"
set_property(TARGET openenclave::oeenclave APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oeenclave PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboeenclave.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oeenclave )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oeenclave "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboeenclave.a" )

# Import target "openenclave::mbedcrypto_static" for configuration "Release"
set_property(TARGET openenclave::mbedcrypto_static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::mbedcrypto_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/libmbedcrypto.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::mbedcrypto_static )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::mbedcrypto_static "${_IMPORT_PREFIX}/lib/openenclave/enclave/libmbedcrypto.a" )

# Import target "openenclave::mbedx509" for configuration "Release"
set_property(TARGET openenclave::mbedx509 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::mbedx509 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/libmbedx509.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::mbedx509 )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::mbedx509 "${_IMPORT_PREFIX}/lib/openenclave/enclave/libmbedx509.a" )

# Import target "openenclave::mbedtls" for configuration "Release"
set_property(TARGET openenclave::mbedtls APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::mbedtls PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/libmbedtls.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::mbedtls )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::mbedtls "${_IMPORT_PREFIX}/lib/openenclave/enclave/libmbedtls.a" )

# Import target "openenclave::oelibc" for configuration "Release"
set_property(TARGET openenclave::oelibc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oelibc PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboelibc.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oelibc )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oelibc "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboelibc.a" )

# Import target "openenclave::oelibcxx" for configuration "Release"
set_property(TARGET openenclave::oelibcxx APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oelibcxx PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboelibcxx.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oelibcxx )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oelibcxx "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboelibcxx.a" )

# Import target "openenclave::oesyscall" for configuration "Release"
set_property(TARGET openenclave::oesyscall APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oesyscall PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboesyscall.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oesyscall )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oesyscall "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboesyscall.a" )

# Import target "openenclave::oehostfs" for configuration "Release"
set_property(TARGET openenclave::oehostfs APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oehostfs PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostfs.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oehostfs )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oehostfs "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostfs.a" )

# Import target "openenclave::oehostresolver" for configuration "Release"
set_property(TARGET openenclave::oehostresolver APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oehostresolver PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostresolver.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oehostresolver )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oehostresolver "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostresolver.a" )

# Import target "openenclave::oehostsock" for configuration "Release"
set_property(TARGET openenclave::oehostsock APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oehostsock PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostsock.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oehostsock )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oehostsock "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostsock.a" )

# Import target "openenclave::oehostepoll" for configuration "Release"
set_property(TARGET openenclave::oehostepoll APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oehostepoll PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostepoll.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oehostepoll )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oehostepoll "${_IMPORT_PREFIX}/lib/openenclave/enclave/liboehostepoll.a" )

# Import target "openenclave::oedebugrt" for configuration "Release"
set_property(TARGET openenclave::oedebugrt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(openenclave::oedebugrt PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/bin/oedebugrt.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS openenclave::oedebugrt )
list(APPEND _IMPORT_CHECK_FILES_FOR_openenclave::oedebugrt "${_IMPORT_PREFIX}/bin/oedebugrt.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
