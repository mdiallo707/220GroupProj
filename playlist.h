//
// Created by leianna chen on 2019/11/18.
//

#ifndef INC_220GROUPPROJ_PLAYLIST_H
#define INC_220GROUPPROJ_PLAYLIST_H
#include <string>
#include "LinkedNode.cpp"
#include "ArrayLib.cpp"

class playlist {
private:
    //number of song list
    int numlist;
    //list created date
    std::string Date;
    //name of the list
    std::string listName;


public:
    std::string DisplayList();
    std::string countTime();
    std::string orderlist();
    void addSongToList();
    void addNewList(std::string listName);
    void removeList();
    void addRandomList(std::string listName);

};


#endif //INC_220GROUPPROJ_PLAYLIST_H
