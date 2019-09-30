# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/ecall
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/ecall
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/ecall "C:/Users/brmclare/openenclave/tests/fuzztests/tests/ecall/host/ecall_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/ecall/enc/ecall_enc")
subdirs("host")
subdirs("enc")
