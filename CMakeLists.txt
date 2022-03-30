cmake_minimum_required(VERSION 3.21)
project(client_numbers)

set(CMAKE_CXX_STANDARD 17)

add_executable(client_numbers main.cpp phone_number.h phone_number.cpp client.h client.cpp phone_book.h phone_book.cpp)
