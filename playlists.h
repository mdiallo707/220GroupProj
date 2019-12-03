//
// Created by leianna chen on 2019/11/18.
//

#ifndef INC_220GROUPPROJ_PLAYLISTS_H
#define INC_220GROUPPROJ_PLAYLISTS_H
#include <string>
#include <stdexcept>
#include "LinkedQueue.h"
#include "ArrayLib.h"
#include <chrono>
#include <ctime>
using namespace std;

class playlists {
private:
    //number of song list
    int numList;
    //list created date
    std::string Duration;
    //name of the list
    std::string listName;
    //link list
    LinkedQueue playlist;



public:
    //playlist link
    string aList[3];
    playlists();

    /**
     * create array under queue
     */
    std::string createArray(std::string Name, std::string Duration,char* aPlaylist);
    /**
    * create a queue
    * include array with name, duration, and address
    */
    void createQueueList(std::string *item);
    /**
     * check if queue is empty
     * @return ture if queue is empty
     */
    bool isQueueEmpty();

    /**
     * count the time
     * @return new time
     */
    std::string countDuration();
    /**
     * order the list in alphbet order
     * @return new list
     */
    std::string orderListAlph();
    /**
     * order the list in time created order
     * @return new list
     */
    std::string orderListDate();
    /**
     * Add a new empty list
     * @param listName
     */
    void addNewList(std::string listName);
    /**
     * remove a list if it's empty
     */
    void removeList(std::string listName);
    /**
     * remove a empty ArrayList
     */
    void removeEmptyArray();
    /**
     * create a random list with random songs in other list
     * @param listName
     */
    std::string RandomList(std::string listName);

};


#endif //INC_220GROUPPROJ_PLAYLISTS_H
