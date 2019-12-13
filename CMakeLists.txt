cmake_minimum_required(VERSION 3.14)
project(Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project main.cpp Inventory.cpp UserInterface.cpp UserInfo.cpp PlaylistLinkedQueue.cpp SongsLinkedNode.cpp CollectLinkedNode.cpp CollectLinkedList.cpp CollectionLinkedList2.cpp CollectionLinkedList2.h CollectionLinkedNode2.cpp CollectionLinkedNode2.h)