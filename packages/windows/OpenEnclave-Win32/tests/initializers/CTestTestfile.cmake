# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/initializers
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/initializers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/initializers "C:/Users/brmclare/openenclave/tests/fuzztests/tests/initializers/host/initializers_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/initializers/enc/initializers_enc")
subdirs("host")
subdirs("enc")
