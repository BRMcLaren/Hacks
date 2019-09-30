# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/report
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/report
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/report "C:/Users/brmclare/openenclave/tests/fuzztests/tests/report/host/report_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/report/enc/report_enc")
set_tests_properties(tests/report PROPERTIES  SKIP_RETURN_CODE "2")
add_test(tests/report_attestation_without_enclave "C:/Users/brmclare/openenclave/tests/fuzztests/tests/report/host/report_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/report/enc/report_enc" "--attest-generated-report")
set_tests_properties(tests/report_attestation_without_enclave PROPERTIES  SKIP_RETURN_CODE "2")
subdirs("host")
subdirs("enc")
