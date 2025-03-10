add_executable(my_app main.cpp)

target_include_directories(my_app PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(my_app PRIVATE primality)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(my_app PRIVATE ${COVERAGE_FLAGS})
    target_link_options(my_app PRIVATE ${COVERAGE_LINK_FLAGS})
endif()