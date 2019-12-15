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

}



