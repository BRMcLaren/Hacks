# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/fuzztests
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/fuzztests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/tcbinfo_test "./tcbinfo_test" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/fuzztests/seeds/tcbinfoparser/tcbInfo.json")
add_test(tests/sgxextensions_test "./sgxextensions_test" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/fuzztests/seeds/parcesgxextensions/generate_report.txt")
add_test(tests/qeidentity_test "./qeidentity_test" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/fuzztests/seeds/qeidentity/qeidentity.json")
add_test(tests/oehostverify_test "./oehostverify_test" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/fuzztests/seeds/qeidentity/oehostverify.bytes")
