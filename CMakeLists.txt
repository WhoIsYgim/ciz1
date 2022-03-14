

cmake_minimum_required(VERSION 3.16.3)

project(ciz1 C CXX)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)

add_subdirectory(src)
target_link_libraries(main LINK_PUBLIC warship storage user_input interface)
