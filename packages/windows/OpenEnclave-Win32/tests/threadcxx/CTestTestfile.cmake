# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/threadcxx
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/threadcxx
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/threadcxx "C:/Users/brmclare/openenclave/tests/fuzztests/tests/threadcxx/host/threadcxx_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/threadcxx/enc/threadcxx_enc")
subdirs("host")
subdirs("enc")
