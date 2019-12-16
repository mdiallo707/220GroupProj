cmake_minimum_required(VERSION 3.14)
project(Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project PlayList2.cpp Inventory.cpp main.cpp Songs.cpp PlaylistLinkedQueue.cpp SongsLinkedNode.cpp   )