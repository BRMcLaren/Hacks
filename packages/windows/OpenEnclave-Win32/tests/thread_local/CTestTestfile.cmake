# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/thread_local
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/thread_local "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local/host/thread_local_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local/enc/thread_local_enc")
add_test(tests/thread_local_exported "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local/host/thread_local_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread_local/enc/thread_local_enc_exported" "--exported-thread-locals")
subdirs("host")
subdirs("enc")
