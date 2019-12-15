#include <iostream>
#include<string>
#include "UserInterface.h"
#include "Inventory.h"
#include "PlayList2.h"


int main() {

PlayList2 test("testPlayList");
test.ReadFromFile("ListofSongs.txt");
test.dequeue();


}



