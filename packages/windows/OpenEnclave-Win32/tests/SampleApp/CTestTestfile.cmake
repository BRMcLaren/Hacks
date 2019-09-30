# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/SampleApp
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/SampleApp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/SampleApp "C:/Users/brmclare/openenclave/tests/fuzztests/tests/SampleApp/host/SampleAppHost.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/SampleApp/enc/SampleApp")
subdirs("host")
subdirs("enc")
