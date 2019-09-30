# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License.


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was openenclave-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

# Reference data.
set(OE_BRANCH "refs/heads/fuzzBatch")
set(OE_COMMIT "c87d7bdd2507a52b59917aebeaab5febf48cc307")
set(OE_BUILD_NUMBER "0")

set_and_check(OE_LIBDIR "${PACKAGE_PREFIX_DIR}/lib")
set_and_check(OE_BINDIR "${PACKAGE_PREFIX_DIR}/bin")
set_and_check(OE_DATADIR "${PACKAGE_PREFIX_DIR}/share")
set_and_check(OE_INCLUDEDIR "${PACKAGE_PREFIX_DIR}/include")

# Dependencies.
include(CMakeFindDependencyMacro)
find_dependency(Threads)
if (UNIX)
  if (NOT TARGET crypto)
    find_library(CRYPTO_LIB NAMES crypto)
    if (NOT CRYPTO_LIB)
      message(FATAL_ERROR "-- Looking for crypto library - not found")
    else ()
      message("-- Looking for crypto library - found")
      add_library(crypto SHARED IMPORTED)
      set_target_properties(crypto PROPERTIES IMPORTED_LOCATION ${CRYPTO_LIB})
    endif ()
  endif ()
  
  if (NOT TARGET dl)
    find_library(DL_LIB NAMES dl)
    if(NOT DL_LIB)
      message(FATAL_ERROR "-- Looking for dl library - not found")
    else ()
      message("-- Looking for dl library - found")
      add_library(dl SHARED IMPORTED)
      set_target_properties(dl PROPERTIES IMPORTED_LOCATION ${DL_LIB})
    endif ()
  endif ()
endif ()

# This target is an OCaml executable, not C++, so we have to manually
# "export" it here for users of the package.
if(NOT TARGET openenclave::oeedger8r)
  add_executable(openenclave::oeedger8r IMPORTED)
  set_target_properties(openenclave::oeedger8r PROPERTIES IMPORTED_LOCATION ${OE_BINDIR}/oeedger8r)
endif ()

# Similarly, this is a shell script.
if(NOT TARGET openenclave::oegdb)
  add_executable(openenclave::oegdb IMPORTED)
  set_target_properties(openenclave::oegdb PROPERTIES IMPORTED_LOCATION ${OE_BINDIR}/oegdb)
endif ()

# Include the automatically exported targets.
include("${CMAKE_CURRENT_LIST_DIR}/openenclave-targets.cmake")

# Apply Spectre mitigations if available.
set(OE_SPECTRE_MITIGATION_FLAGS "-mllvm;-x86-speculative-load-hardening")

# Check for compiler flags support.
if (CMAKE_C_COMPILER)
  include(CheckCCompilerFlag)
  check_c_compiler_flag("${OE_SPECTRE_MITIGATION_FLAGS}" OE_SPECTRE_MITIGATION_C_FLAGS_SUPPORTED)
endif ()

if (CMAKE_CXX_COMPILER)
  include(CheckCXXCompilerFlag)
  check_cxx_compiler_flag("${OE_SPECTRE_MITIGATION_FLAGS}" OE_SPECTRE_MITIGATION_CXX_FLAGS_SUPPORTED)
endif ()

if (OE_SPECTRE_MITIGATION_C_FLAGS_SUPPORTED OR OE_SPECTRE_MITIGATION_CXX_FLAGS_SUPPORTED)
  target_compile_options(openenclave::oecore INTERFACE ${OE_SPECTRE_MITIGATION_FLAGS})
endif ()
