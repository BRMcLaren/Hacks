# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/props
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/props
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/props_unsigned "C:/Users/brmclare/openenclave/tests/fuzztests/tests/props/host/props_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/props/enc/props_enc_unsigned" "unsigned")
add_test(tests/props "C:/Users/brmclare/openenclave/tests/fuzztests/tests/props/host/props_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/props/enc/props_enc.signed" "signed")
subdirs("host")
subdirs("enc")
