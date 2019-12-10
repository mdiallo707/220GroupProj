//
// Created by emurray2 on 12/8/2019.
//

#ifndef PERSONALGROUPPROJ_USERINTERACTION_H
#define PERSONALGROUPPROJ_USERINTERACTION_H
// this is going to be the interface that is inherited
#include <stdexcept>
#include <string>
// method names are generic because they will be implemented differently
// for a playlist,collection and the inventory
class UserInteraction {
// delete is predefined which is why I put stuff implement delete for
// collections,playlists and songs in the inventory
    virtual void deleteStuff() = 0; // do not change to delete it is predefined
    virtual void add() = 0;

    virtual void incrementPlay() = 0;

    // print everything in a collection,playlist and
    //inventory
    virtual void displayAll() = 0;

    // print a particular song,playlist and collection
    virtual void displaySelect() = 0;

    // delete everything in inventory,playlist and collection
    virtual void clearAll() = 0;

    virtual void deleteFromFile() = 0;

    virtual void addToFile() = 0;

    virtual void informationSelect() = 0;

    virtual void informationAll() = 0;

    virtual void saveFile() = 0;
};














#endif //PERSONALGROUPPROJ_USERINTERACTION_H
