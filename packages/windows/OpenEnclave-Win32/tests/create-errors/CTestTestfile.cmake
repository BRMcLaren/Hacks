# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/create-errors
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/create-errors
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/create-errors "C:/Users/brmclare/openenclave/tests/fuzztests/tests/create-errors/host/create_errors_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/create-errors/enc/create_errors_enc")
subdirs("host")
subdirs("enc")
