# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/pingpong-shared
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/pingpong-shared
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/pingpong-shared "C:/Users/brmclare/openenclave/tests/fuzztests/tests/pingpong-shared/host/pingpong-shared_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/pingpong-shared/enc/pingpong-shared_enc")
subdirs("host")
subdirs("enc")
