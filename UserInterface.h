//
// Created by emurray2 on 12/8/2019.
//
#include "UserInfo.h"
#include "PlaylistLinkedQueue.h"
#include "CollectLinkedList.h"


#ifndef GITYPART_USERINTERFACE_H
#define GITYPART_USERINTERFACE_H


class UserInterface {
private:
  std::string  userName;
  std::string firstName;
  std::string lastName;
  PlaylistLinkedQueue userPlayList;
  CollectLinkedList userCollection;


  bool exit=false;

public:
    UserInterface(){}
    void Interface();
    void setExitInterface();
    void getExit();
    bool exitInterface();
    void collectionInterface();
    void playListInterface();
    void inventoryInterface();
    void commandsDJ();
    UserInfo  createAccount();
    void test();
    void help();
    bool availableUserName(); // check if a given userName is availible;
    void add(); // add song
    void clear(); // clear inventory
    void deleteStuff(); // delete songs
    void incrementPlay();
    // print everything in a collection,playlist and
    //inventory
    void displayAll();
    // print a particular song,playlist and collection
    void displaySelect();
    // delete everything in inventory,playlist and collection
    void clearAll();
    void deleteFromFile();
    void addToFile();
    void informationSelect();
    void informationAll();
    void saveFile();

    void main();


};


#endif //GITYPART_USERINTERFACE_H
