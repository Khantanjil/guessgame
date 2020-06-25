cmake_minimum_required(VERSION 2.6)
project(guessnumber)

add_executable(guessnumber main.cpp)

install(TARGETS guessnumber RUNTIME DESTINATION bin)
