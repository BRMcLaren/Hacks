# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/bigmalloc
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/bigmalloc
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/bigmalloc "C:/Users/brmclare/openenclave/tests/fuzztests/tests/bigmalloc/host/bigmalloc_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/bigmalloc/enc/bigmalloc_enc.signed")
set_tests_properties(tests/bigmalloc PROPERTIES  SKIP_RETURN_CODE "2")
subdirs("host")
subdirs("enc")
