# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/ocall-create
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/ocall-create
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/ocall-create "C:/Users/brmclare/openenclave/tests/fuzztests/tests/ocall-create/host/ocall_create_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/ocall-create/enc/ocall_create_enc")
subdirs("host")
subdirs("enc")
