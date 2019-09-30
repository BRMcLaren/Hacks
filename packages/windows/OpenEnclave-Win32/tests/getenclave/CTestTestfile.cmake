# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/getenclave
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/getenclave
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/getenclave "C:/Users/brmclare/openenclave/tests/fuzztests/tests/getenclave/host/getenclave_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/getenclave/enc/getenclave_enc")
subdirs("host")
subdirs("enc")
