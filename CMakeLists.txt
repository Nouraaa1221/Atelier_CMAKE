add_executable(calculator main.c)
target_include_directories(calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(calculator lib)

