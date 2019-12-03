cmake_minimum_required(VERSION 3.14)
project(Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project LinkedNode.cpp TestLib.cpp ArrayLib.cpp playlists.cpp playlistsTest.cpp LinkedQueue.cpp LinkedQueue.h)