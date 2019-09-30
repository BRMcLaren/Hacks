# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/attestation_cert_apis
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/attestation_cert_apis
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/attestation_cert_api "C:/Users/brmclare/openenclave/tests/fuzztests/tests/attestation_cert_apis/host/tls_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/attestation_cert_apis/enc/tls_enc")
set_tests_properties(tests/attestation_cert_api PROPERTIES  SKIP_RETURN_CODE "2")
subdirs("host")
subdirs("enc")
