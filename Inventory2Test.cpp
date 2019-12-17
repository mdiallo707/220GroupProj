//
// Created by emurray2 on 12/16/2019.
//Inventory2 is the best verison of inventory
// no time to for more changes it
#include "Inventory2.h"
#include "TestLib.h"
#include <iostream>

#include "TestLib.h"
//the focus of the test are to make sure things are being added in alphabetical order
//songs are being removed, Inventory2 is being cleard
void inside(){
    //this test show you if a song in the front is being added o
    Inventory2 testing2;
    cout<<"This checks the order of inventory and if things are being added"<<endl;
    testing2.addSong("5","gfd",10);
    testing2.addSong("4","fqd",10);
    testing2.addSong("3","fqd",10);
    testing2.addSong("6","here",10);
    printAssertEquals("3",testing2.removeFrontArtistName());
    printAssertEquals("4",testing2.removeFrontArtistName());
    printAssertEquals("5",testing2.removeFrontArtistName());
    printAssertEquals("6",testing2.removeFrontArtistName());
    cout<<"Second Part"<<endl;
    testing2.clearLibrary();
    testing2.addSong("Beyonce","gfd",10);
    testing2.addSong("Kelly","fqd",10);
    testing2.addSong("Iggy","fqd",10);
    testing2.addSong("Ziig","fqd",10);
    testing2.addSong("Elphaba","here",10);
    printAssertEquals("Beyonce",testing2.removeFrontArtistName());
    printAssertEquals("Elphaba",testing2.removeFrontArtistName());
    printAssertEquals("Iggy",testing2.removeFrontArtistName());
    printAssertEquals("Kelly",testing2.removeFrontArtistName());
    printAssertEquals("Ziig",testing2.removeFrontArtistName());

}
void removeSongCheck(){
    cout<<"Checks if remove and clear list are working properly"<<endl;
    Inventory2 testing2;
    printAssertEquals(true,true);
    testing2.addSong("5","gfd",10);
    testing2.addSong("4","fqd",10);
    testing2.addSong("3","fqd",10);
    testing2.addSong("6","here",10);
    testing2.clearLibrary();
    printAssertEquals(true,testing2.isEmpty());
    testing2.addSong("4","fqd",10);
    printAssertEquals(false,testing2.isEmpty());
    testing2.clearLibrary();
    testing2.addSong("4","fqd",10);
    testing2.addSong("3","fqd",10);
    testing2.addSong("6","here",10);
    testing2.addSong("7","here",10);
    testing2.removeSong("4","fqd");
    printAssertEquals(false,testing2.isSongIn("4","fqd"));
    testing2.addSong("4","fqd",10);
    printAssertEquals(true,testing2.isSongIn("4","fqd"));




}


int main() {
    inside();
    removeSongCheck();



}