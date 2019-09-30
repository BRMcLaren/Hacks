# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/print
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/print
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/print "sh" "-c" "OE_LOG_LEVEL=NONE host/print_host ./enc/print_enc >testout.stdout 2>testout.stderr &&
			diff C:/Users/brmclare/openenclave/tests/print/printhost.stdout testout.stdout &&
			diff C:/Users/brmclare/openenclave/tests/print/printhost.stderr testout.stderr")
set_tests_properties(tests/print PROPERTIES  WORKING_DIRECTORY "C:/Users/brmclare/openenclave/tests/fuzztests/tests/print")
subdirs("host")
subdirs("enc")
