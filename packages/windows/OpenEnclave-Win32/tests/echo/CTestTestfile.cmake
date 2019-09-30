# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/echo
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/echo
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/echo "C:/Users/brmclare/openenclave/tests/fuzztests/tests/echo/host/echo_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/echo/enc/echo_enc")
subdirs("host")
subdirs("enc")
