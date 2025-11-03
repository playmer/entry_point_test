cmake_minimum_required(VERSION 3.16)
project(entry_point_test LANGUAGES C CXX VERSION "3.3.3")

add_library(lib STATIC lib.cpp)

add_executable(app)
target_sources(app PRIVATE app.cpp)
target_link_libraries(app PRIVATE lib)