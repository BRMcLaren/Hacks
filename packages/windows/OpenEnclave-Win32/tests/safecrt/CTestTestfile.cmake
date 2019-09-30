# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/safecrt
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/safecrt
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/safecrt "C:/Users/brmclare/openenclave/tests/fuzztests/tests/safecrt/host/safecrt_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/safecrt/enc/safecrt_enc")
subdirs("host")
subdirs("enc")
