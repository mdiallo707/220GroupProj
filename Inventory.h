//
// Created by emurray2 on 12/11/2019.
//

#ifndef GITYPART_INVENTORY2_H
#define GITYPART_INVENTORY2_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "SongsLinkedNode.h"
using namespace std;

class Inventory {
private:
    SongsLinkedNode*end;
    SongsLinkedNode*front;
    int count;
public:
    Inventory();
    void particularSong(string artistName,string songTitle);
    std::string artistAllSongs(std::string artistName);
    void particularAS(string artist,string songTitle);
    void getSongInfo();
    std::string endVal();
    //this will give you the object
    void deleteSong(std::string artistName, std::string songName);
    void clearLibrary();
    void play();
    void  displayInventory();
    void time();
    void currentSongs();
    void countSongs();
    int returnSongs();
    void particularArtist(std::string);
    void removeSong(std:: string artistName,std::string sogName);


    void ReadFromFile(string playListName);

    void addSong(string artistName, string title, double duration);
};


#endif //GITYPART_INVENTORY2_H
