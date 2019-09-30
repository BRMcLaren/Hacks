# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/debug-mode
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/debug-unsigned "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/host/debug_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/enc/debug_enc" "debug" "unsigned")
set_tests_properties(tests/debug-unsigned PROPERTIES  SKIP_RETURN_CODE "2")
add_test(tests/debug-signed "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/host/debug_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/enc/debug_enc.signed" "debug" "signed")
set_tests_properties(tests/debug-signed PROPERTIES  SKIP_RETURN_CODE "2")
add_test(tests/nodebug-signed "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/host/debug_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/enc/no_debug_enc.signed" "nodebug" "signed")
set_tests_properties(tests/nodebug-signed PROPERTIES  SKIP_RETURN_CODE "2")
add_test(tests/nodebug-unsigned "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/host/debug_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/debug-mode/enc/no_debug_enc_unsigned" "nodebug" "unsigned")
set_tests_properties(tests/nodebug-unsigned PROPERTIES  SKIP_RETURN_CODE "2")
subdirs("host")
subdirs("enc")
