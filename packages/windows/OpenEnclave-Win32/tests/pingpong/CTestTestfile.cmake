# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/pingpong
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/pingpong
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/pingpong "C:/Users/brmclare/openenclave/tests/fuzztests/tests/pingpong/host/pingpong_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/pingpong/enc/pingpong_enc")
subdirs("host")
subdirs("enc")
