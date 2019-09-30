# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/thread
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/oethread "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread/host/thread_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread/enc/oethread_enc")
add_test(tests/pthread "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread/host/thread_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/thread/enc/pthread_enc")
subdirs("host")
subdirs("enc")
