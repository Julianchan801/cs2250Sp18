cmake_minimum_required(VERSION 3.10)
project(mod10)

set(CMAKE_C_STANDARD 99)

add_executable(main.out main.c Playlist.h Playlist.c)
