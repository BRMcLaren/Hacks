# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/sealKey
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/sealKey
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/sealKey "C:/Users/brmclare/openenclave/tests/fuzztests/tests/sealKey/host/sealKey_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/sealKey/enc/sealKey_enc")
set_tests_properties(tests/sealKey PROPERTIES  SKIP_RETURN_CODE "2")
subdirs("host")
subdirs("enc")
