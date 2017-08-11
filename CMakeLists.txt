cmake_minimum_required(VERSION 3.7)
project(default_name)

#if (PROJECT_NAME MATCHES default_name)
#    message(FATAL_ERROR "Please, change the project name and remove this check")
#endif()

set(CMAKE_CXX_STANDARD 14)

set(source_files
        src/Yatzy.h
        src/Yatzy.cpp)

set(test_files
        test/main.test.cpp test/yatzy.test.cpp)

add_executable(unit_tests
        ${source_files}
        ${test_files})

target_include_directories(unit_tests PRIVATE
        src
        test)