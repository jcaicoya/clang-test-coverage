cmake_minimum_required(VERSION 3.28)
project(test_coverage)

#set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_C_COMPILER "/usr/lib/llvm-19/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/lib/llvm-19/bin/clang++")
set(CMAKE_CXX_STANDARD 23)

set(COVERAGE_FLAGS -fprofile-instr-generate -fcoverage-mapping)
set(COVERAGE_LINK_FLAGS -fprofile-instr-generate -fcoverage-mapping)

enable_testing()

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
