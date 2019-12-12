//
// Created by leianna chen on 2019/11/18.
//

#ifndef INC_220GROUPPROJ_COLLPLAYLISTS_H
#define INC_220GROUPPROJ_COLLPLAYLISTS_H
#include <string>
#include <stdexcept>
#include "ArrayLib.h"
#include "Playlist.h"
#include "UserInteraction.h"
#include "LinkedPlaylist.h"
#include "LinkedNode.h"
#include "PlaylistLinkedQueue.h"
using namespace std;

class CollPlaylists {
private:

    //pointer to the playlist
    PlaylistLinkedQueue *songList;
    //number of song list
    int size = 0;


public:
    int countSize();

    /**
     * create array under queue
     */
     int* createArray();

    /**
    * count the duration in the playlist
    * @return total duration
    */
    std::string countDuration();

    /**
     * check if queue is empty
     * @return ture if queue is empty
     */
    bool isArrayEmpty();

    /**
     * display playList name and duration
     */
    virtual void displayAll() = 0;

    /**
     * display selected playlist
     */
    virtual void displaySelect(std::string nameToFind) = 0;

    /**
     * clear entire playlist
     */
    virtual void clearAll() = 0;

    /**
     * add a playlist
     */
    virtual void addToFile() = 0;

    /**
     * remove a playlist
     */
    virtual void deleteFromFile(std::string PlaylistName) = 0;

    /**
     * add a new play list
     * @param playList
     */
    void addNewList(int *playList);

    /**
     * create a random list with random songs in other list
     * @param listName
     */
    void RandomList(std::string listName);

    virtual void saveFile() = 0;
};


#endif //INC_220GROUPPROJ_COLLPLAYLISTS_H
