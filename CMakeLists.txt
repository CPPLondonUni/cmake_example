
cmake_minimum_required(VERSION 3.1)

project(cmake_example CXX)

add_library(hello src/hello.cpp)
target_include_directories(hello PUBLIC include)
target_compile_features(hello PUBLIC cxx_std_14) # require C++14

add_executable(test_hello test/test_hello.cpp)
target_link_libraries(test_hello hello)

