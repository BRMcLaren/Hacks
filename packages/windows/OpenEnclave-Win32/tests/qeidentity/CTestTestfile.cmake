# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/qeidentity
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/qeidentity
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/qeidentity "C:/Users/brmclare/openenclave/tests/fuzztests/tests/qeidentity/host/qeidentity_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/qeidentity/enc/qeidentity_enc")
set_tests_properties(tests/qeidentity PROPERTIES  SKIP_RETURN_CODE "2")
subdirs("host")
subdirs("enc")
