# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/argv
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/argv
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/argv "C:/Users/brmclare/openenclave/tests/fuzztests/tests/argv/host/argv_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/argv/enc/argv_enc")
subdirs("host")
subdirs("enc")
