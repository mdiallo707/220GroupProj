#include <iostream>
#include<string>
#include "UserInterface.h"
#include "Inventory.h"
#include "PlayList2.h"


int main() {

//PlayList2 test("testPlayList");
//test.ReadFromFile("ListofSongs.txt");
////test.dequeue();
//Inventory check;
//check.ReadFromFile("d");
////check.currentSongs();
//check.removeSong("Beyonce","Nile");
//check.currentSongs();
Inventory testing2;
    testing2.addSong("5","fqd",10);
    testing2.addSong("3","fqd",10);
    testing2.addSong("6","here",10);
    //testing2.removeSong("5","fqd");
    testing2.currentSongs();


}



