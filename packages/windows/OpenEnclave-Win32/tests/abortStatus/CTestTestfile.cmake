# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/abortStatus
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/abortStatus
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/abortStatus "C:/Users/brmclare/openenclave/tests/fuzztests/tests/abortStatus/host/abortStatus_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/abortStatus/enc/abortStatus_enc")
subdirs("host")
subdirs("enc")
