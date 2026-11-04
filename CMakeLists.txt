cmake_minimum_required(VERSION 3.18)
project(modmenu)

add_library(modmenu SHARED main.cpp)

find_library(log-lib log)
target_link_libraries(modmenu ${log-lib} dl)
