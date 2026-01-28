# CMake generated Testfile for 
# Source directory: D:/Repositories/CppProjectTemplate/tests
# Build directory: D:/Repositories/CppProjectTemplate/cmake-build-debug/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(ExampleTest "D:/Repositories/CppProjectTemplate/cmake-build-debug/tests/Debug/CppProjectTemplateTests.exe")
  set_tests_properties(ExampleTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;20;add_test;D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(ExampleTest "D:/Repositories/CppProjectTemplate/cmake-build-debug/tests/Release/CppProjectTemplateTests.exe")
  set_tests_properties(ExampleTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;20;add_test;D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(ExampleTest "D:/Repositories/CppProjectTemplate/cmake-build-debug/tests/MinSizeRel/CppProjectTemplateTests.exe")
  set_tests_properties(ExampleTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;20;add_test;D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(ExampleTest "D:/Repositories/CppProjectTemplate/cmake-build-debug/tests/RelWithDebInfo/CppProjectTemplateTests.exe")
  set_tests_properties(ExampleTest PROPERTIES  _BACKTRACE_TRIPLES "D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;20;add_test;D:/Repositories/CppProjectTemplate/tests/CMakeLists.txt;0;")
else()
  add_test(ExampleTest NOT_AVAILABLE)
endif()
subdirs("../_deps/googletest-build")
