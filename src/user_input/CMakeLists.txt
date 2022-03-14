add_library(user_input input.h input.c)
target_include_directories(user_input PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
