# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/host_verify
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/host_verify
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/host_verify "C:/Users/brmclare/openenclave/tests/fuzztests/tests/host_verify/host/test_host_verify.exe")
set_tests_properties(tests/host_verify PROPERTIES  SKIP_RETURN_CODE "2" WORKING_DIRECTORY "C:/Users/brmclare/openenclave/tests/fuzztests/tests/host_verify/host")
subdirs("host")
