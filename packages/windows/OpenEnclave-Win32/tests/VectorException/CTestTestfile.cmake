# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/VectorException
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/VectorException
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/VectorException "C:/Users/brmclare/openenclave/tests/fuzztests/tests/VectorException/host/VectorException_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/VectorException/enc/VectorException_enc")
set_tests_properties(tests/VectorException PROPERTIES  SKIP_RETURN_CODE "2")
subdirs("host")
subdirs("enc")
