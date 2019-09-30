# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/stdcxx
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdcxx
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/stdcxx "C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdcxx/host/stdcxx_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdcxx/enc/stdcxx_enc" "OE_OK")
add_test(tests/global_init_exception "C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdcxx/host/stdcxx_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdcxx/enc/global_init_exception_enc" "OE_ENCLAVE_ABORTING")
subdirs("host")
subdirs("enc")
