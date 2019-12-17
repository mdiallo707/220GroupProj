//
// Created by emurray2 on 12/11/2019.
//

#ifndef GITYPART_INVENTORY2_H
#define GITYPART_INVENTORY2_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "Songs.h"
#include <iostream>
#include <sstream>


#include <string>
#include <iomanip>

using namespace std;

class Inventory2 {
private:
    Songs*front;
    Songs*end;
    int count;
public:
    Inventory2();
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
    void checkNew();
    void particularArtist(std::string);
    void removeSong(std:: string artistName,std::string sogName);
    void addAlphaSong(std::string artistName, std::string title, double duration);
    void currentSongs();

    void particularSong(string artistName, string songTitle);

    void removeFront();

    string removeFrontArtistName();

    string frontSong();

    bool isEmpty();


    bool isSongIn(string artistName, string songTitle);
};


#endif //GITYPART_INVENTORY2_H
