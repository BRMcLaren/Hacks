# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/cppException
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/cppException
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/cppException "C:/Users/brmclare/openenclave/tests/fuzztests/tests/cppException/host/cppException_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/cppException/enc/cppException_enc")
subdirs("host")
subdirs("enc")
