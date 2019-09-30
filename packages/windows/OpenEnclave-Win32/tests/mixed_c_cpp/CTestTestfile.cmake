# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/mixed_c_cpp
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/mixed_c_cpp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/mixed_c_cpp "C:/Users/brmclare/openenclave/tests/fuzztests/tests/mixed_c_cpp/host/mixed_c_cpp_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/mixed_c_cpp/enc/mixed_c_cpp_enc")
subdirs("host")
subdirs("enc")
