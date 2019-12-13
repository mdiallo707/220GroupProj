cmake_minimum_required(VERSION 3.14)
project(Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project CollectPlaylists.cpp CollectPlaylistsTest.cpp TestLib.cpp PlaylistLinkedQueue.cpp SongsLinkedNode.cpp Inventory.cpp CollectLinkedNode.cpp CollectLinkedNode.h CollectLinkedList.cpp CollectLinkedList.h cmake-build-debug/allTests.cpp allTestsClass.cpp)