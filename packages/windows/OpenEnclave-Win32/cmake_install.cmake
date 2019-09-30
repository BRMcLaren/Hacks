# Install script for directory: C:/Users/brmclare/openenclave

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/openenclave")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xOEHOSTVERIFYx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake" TYPE FILE FILES
    "C:/Users/brmclare/openenclave/tests/fuzztests/cmake/openenclave-config.cmake"
    "C:/Users/brmclare/openenclave/tests/fuzztests/cmake/openenclave-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xOEHOSTVERIFYx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake/openenclave-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake/openenclave-targets.cmake"
         "C:/Users/brmclare/openenclave/tests/fuzztests/CMakeFiles/Export/lib/openenclave/cmake/openenclave-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake/openenclave-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake/openenclave-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake" TYPE FILE FILES "C:/Users/brmclare/openenclave/tests/fuzztests/CMakeFiles/Export/lib/openenclave/cmake/openenclave-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake" TYPE FILE FILES "C:/Users/brmclare/openenclave/tests/fuzztests/CMakeFiles/Export/lib/openenclave/cmake/openenclave-targets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xOEHOSTVERIFYx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/openenclave/cmake" TYPE FILE RENAME "README.md" FILES "C:/Users/brmclare/openenclave/cmake/sdk_cmake_targets_readme.md")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xOEHOSTVERIFYx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/opt/openenclave/share/openenclave/openenclaverc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/opt/openenclave/share/openenclave" TYPE FILE FILES "C:/Users/brmclare/openenclave/tests/fuzztests/output/share/openenclave/openenclaverc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/openenclave/licenses" TYPE FILE FILES
    "C:/Users/brmclare/openenclave/LICENSE"
    "C:/Users/brmclare/openenclave/THIRD_PARTY_NOTICES"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/BuildTools/VC/Redist/MSVC/14.16.27012/x64/Microsoft.VC141.CRT/msvcp140.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/BuildTools/VC/Redist/MSVC/14.16.27012/x64/Microsoft.VC141.CRT/vcruntime140.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/BuildTools/VC/Redist/MSVC/14.16.27012/x64/Microsoft.VC141.CRT/concrt140.dll"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY FILES "")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/brmclare/openenclave/tests/fuzztests/host/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/include/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/tests/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/tools/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/enclave/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/3rdparty/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/libc/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/libcxx/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/syscall/cmake_install.cmake")
  include("C:/Users/brmclare/openenclave/tests/fuzztests/debugger/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/brmclare/openenclave/tests/fuzztests/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
