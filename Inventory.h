//
// Created by emurray2 on 11/28/2019.
//

#ifndef GITYPART_INVENTORY_H
#define GITYPART_INVENTORY_H
#include <string>
#include <stdexcept>
#include "Songs.h"

class Inventory {
    double runTime;
    Songs*front;
    Songs*end;


public:
    Inventory();
    void artistAllSongs(std::string artistName);
    void songInfo(std::string artistN,std::string songTitle);


    void clearLibrary();

    std::string displayInventory();

    void enqueue(std::string artistName, std::string title, double duration);
};


#endif //GITYPART_INVENTORY_H
