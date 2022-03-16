cmake_minimum_required(VERSION 3.16.3)

project(ciz1 C CXX)

set(CMAKE_C_STANDARD 99)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage ")
set(CMAKE_C_FLAGS "--coverage")
add_executable(main main.c)

add_subdirectory(src)
add_subdirectory(tests)
target_link_libraries(main LINK_PUBLIC warship storage user_input interface)
