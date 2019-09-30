# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/hexdump
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/hexdump
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/hexdump "C:/Users/brmclare/openenclave/tests/fuzztests/tests/hexdump/host/hexdump_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/hexdump/enc/hexdump_enc")
subdirs("host")
subdirs("enc")
