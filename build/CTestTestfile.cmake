# CMake generated Testfile for 
# Source directory: C:/Users/sovte/OneDrive/Документи/C++/DeadVault
# Build directory: C:/Users/sovte/OneDrive/Документи/C++/DeadVault/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[vault_tests]=] "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/build/Debug/vault_tests.exe")
  set_tests_properties([=[vault_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;32;add_test;C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[vault_tests]=] "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/build/Release/vault_tests.exe")
  set_tests_properties([=[vault_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;32;add_test;C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[vault_tests]=] "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/build/MinSizeRel/vault_tests.exe")
  set_tests_properties([=[vault_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;32;add_test;C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[vault_tests]=] "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/build/RelWithDebInfo/vault_tests.exe")
  set_tests_properties([=[vault_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;32;add_test;C:/Users/sovte/OneDrive/Документи/C++/DeadVault/CMakeLists.txt;0;")
else()
  add_test([=[vault_tests]=] NOT_AVAILABLE)
endif()
