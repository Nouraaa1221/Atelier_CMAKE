add_subdirectory(lib)
add_executable(calculator main.c)
target_link_libraries(calculator lib)
target_include_directories(calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

