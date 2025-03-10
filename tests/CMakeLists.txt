include(FetchContent)

# Fetch GoogleTest
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Prevent GoogleTest from installing tests we don't need
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add test executable
add_executable(test_primality test_primality.cpp)

# Ensure the test can find primality.h by including the src directory
target_include_directories(test_primality PRIVATE ${CMAKE_SOURCE_DIR}/src)

# Link with the primality library and GoogleTest
target_link_libraries(test_primality PRIVATE primality gtest gtest_main pthread)

# Apply coverage flags if in Debug mode
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(test_primality PRIVATE -fprofile-instr-generate -fcoverage-mapping)
    target_link_options(test_primality PRIVATE -fprofile-instr-generate -fcoverage-mapping)
endif()

# Register the test with CTest
add_test(NAME test_primality COMMAND test_primality)
