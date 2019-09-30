# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/enclaveparam
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/enclaveparam
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/enclaveparam "C:/Users/brmclare/openenclave/tests/fuzztests/tests/enclaveparam/host/enclaveparam_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/enclaveparam/enc/enclaveparam_enc")
subdirs("host")
subdirs("enc")
