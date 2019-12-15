#include <iostream>
#include<string>
#include "UserInterface.h"
#include "Inventory.h"
#include "Inventory.h"
#include "PlayList2.h"


int main() {

PlayList2 testPlayList("testPlayLIst");
testPlayList.ReadFromFile("ListofSongs.txt");
testPlayList.dequeue();
string playListName=testPlayList.getPlayListName();
CollectLinkedList testCollect;
PlayList2 *myclass;
PlayList2 c("newHere");
string name=c.getPlayListName();
//CollectLinkedNode(c,myclass); - need to create a version that takes in PlayList2 as a class

}



