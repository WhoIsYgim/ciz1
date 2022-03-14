add_library(interface interface.h interface.c)
target_include_directories(interface PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(interface LINK_PUBLIC storage user_input)