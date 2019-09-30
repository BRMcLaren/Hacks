# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/crypto_crls_cert_chains
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/crypto_crls_cert_chains
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/crypto_crls_cert_chains "C:/Users/brmclare/openenclave/tests/fuzztests/tests/crypto_crls_cert_chains/host/crypto-extra_host.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/crypto_crls_cert_chains/enc/crypto-extra_enc")
subdirs("data")
subdirs("host")
subdirs("enc")
