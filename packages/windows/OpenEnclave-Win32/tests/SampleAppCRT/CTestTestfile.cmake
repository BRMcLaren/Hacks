# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/SampleAppCRT
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/SampleAppCRT
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/SampleAppCRT "C:/Users/brmclare/openenclave/tests/fuzztests/tests/SampleAppCRT/host/SampleAppCRTHost.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/SampleAppCRT/enc/SampleAppCRT")
subdirs("host")
subdirs("enc")
