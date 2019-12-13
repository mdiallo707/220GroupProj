//
// Created by emurray2 on 12/11/2019.
//

#ifndef GITYPART_INVENTORY2_H
#define GITYPART_INVENTORY2_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "Songs.h"

class Inventory {
private:
    Songs*end;
    Songs*front;
    int count;
public:
    Inventory();
    std::string artistAllSongs(std::string artistName);

    void getSongInfo();
    std::string endVal();
    //this will give you the object
    void addSong(std::string artistName,std::string songTitle,double duration);
    void deleteSong(std::string artistName, std::string songName);
    void clearLibrary();
    void play();
    void  displayInventory();
    void time();
    void check();
    void particularArtist(std::string);
    void removeSong(std:: string artistName,std::string sogName);
    int countSongs();
    void addAlphaSong(std::string artistName, std::string title, double duration);
};


#endif //GITYPART_INVENTORY2_H
