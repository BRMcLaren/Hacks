# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/ocall
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/ocall
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/ocall "C:/Users/brmclare/openenclave/tests/fuzztests/tests/ocall/host/ocall_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/ocall/enc/ocall_enc")
subdirs("host")
subdirs("enc")
