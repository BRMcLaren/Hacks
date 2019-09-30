# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/thread_local_no_tdata
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local_no_tdata
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/thread_locals_no_tdata "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local_no_tdata/host/no_tdata_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local_no_tdata/enc/no_tdata_enc")
subdirs("host")
subdirs("enc")
