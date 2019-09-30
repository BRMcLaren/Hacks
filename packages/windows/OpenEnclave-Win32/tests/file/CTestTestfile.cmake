# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/file
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/file
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/file "C:/Users/brmclare/openenclave/tests/fuzztests/tests/file/host/file_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/file/enc/file_enc")
subdirs("host")
subdirs("enc")
