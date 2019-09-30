# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/backtrace
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/backtrace
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/backtrace "C:/Users/brmclare/openenclave/tests/fuzztests/tests/backtrace/host/backtrace_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/backtrace/enc/backtrace_enc")
subdirs("host")
subdirs("enc")
