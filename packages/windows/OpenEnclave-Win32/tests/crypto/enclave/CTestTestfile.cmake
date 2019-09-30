# CMake generated Testfile for 
# Source directory: C:/Users/brmclare/openenclave/tests/crypto/enclave
# Build directory: C:/Users/brmclare/openenclave/tests/fuzztests/tests/crypto/enclave
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tests/crypto/enclave "C:/Users/brmclare/openenclave/tests/fuzztests/tests/crypto/enclave/host/cryptohost.exe" "C:/Users/brmclare/openenclave/tests/fuzztests/tests/crypto/enclave/enc/cryptoenc")
subdirs("enc")
subdirs("host")
