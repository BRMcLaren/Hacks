# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/oeedger8r
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/oeedger8r
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/oeedger8r "C:/Users/brmclare/openenclave/tests/fuzztests/tests/oeedger8r/host/edl_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/oeedger8r/enc/edl_enc")
add_test(tests/oeedger8r_other "C:/Users/brmclare/openenclave/tests/fuzztests/tests/oeedger8r/host/edl_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/oeedger8r/enc/edl_other_enc")
subdirs("host")
subdirs("enc")
subdirs("behavior")
