cmake_minimum_required(VERSION 3.5)
project(calculator C)
add_subdirectory(include)
add_subdirectory(src)
include_directories(include)
enable_testing()


add_test(NAME t1 COMMAND src/calculator add 2 3)
set_tests_properties(t1 PROPERTIES PASS_REGULAR_EXPRESSION "5.000000")

add_test(NAME t2 COMMAND src/calculator sub 3 -2)
set_tests_properties(t2 PROPERTIES PASS_REGULAR_EXPRESSION "5.000000")

add_test(NAME t3 COMMAND src/calculator mul 5 5)
set_tests_properties(t3 PROPERTIES PASS_REGULAR_EXPRESSION "25.000000")

add_test(NAME t4 COMMAND src/calculator div 1 5)
set_tests_properties(t4 PROPERTIES PASS_REGULAR_EXPRESSION "0.200000")


add_test(NAME t5_car COMMAND src/calculator car 5)
set_tests_properties(t5_car PROPERTIES PASS_REGULAR_EXPRESSION "25.000000")
