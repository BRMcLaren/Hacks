# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/hostcalls
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/hostcalls
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/hostcalls "C:/Users/brmclare/openenclave/tests/fuzztests/tests/hostcalls/host/hostcalls_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/hostcalls/enc/hostcalls_enc")
subdirs("host")
subdirs("enc")
