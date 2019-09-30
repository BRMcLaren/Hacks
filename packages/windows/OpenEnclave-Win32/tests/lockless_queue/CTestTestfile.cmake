# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/lockless_queue
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/lockless_queue
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/lockless_queue "C:/Users/brmclare/openenclave/tests/fuzztests/tests/lockless_queue/host/lockless_queue_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/lockless_queue/enc/lockless_queue_enc")
subdirs("host")
subdirs("enc")
