# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/stdc
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdc
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/stdc "C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdc/host/stdc_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/stdc/enc/stdc_enc")
subdirs("host")
subdirs("enc")
