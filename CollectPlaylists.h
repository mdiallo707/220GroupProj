//
// Created by leianna chen on 2019/11/18.
//

#ifndef INC_220GROUPPROJ_COLLPLAYLISTS_H
#define INC_220GROUPPROJ_COLLPLAYLISTS_H
#include <string>
#include <stdexcept>
#include "Playlist.h"
#include "PlaylistLinkedQueue.h"
#include "CollectLinkedList.h"
using namespace std;

class CollPlaylists {
private:

    //number of song list
    int size = 0;


public:
//
    //pointer to the playlist
    CollectLinkedList listPlaylists = CollectLinkedList();


    /**
    * count the duration in the playlist
    * @return total duration
    */
    std::string countDuration();

    /**
     * check if queue is empty
     * @return ture if queue is empty
     */
    bool isLinkEmpty();

    /**
     * display playList name and duration
     */
    virtual void displayAll() = 0;

    /**
     * display selected playlist
     */
    virtual void displaySelect(std::string playlistTitleIn) = 0;

    /**
     * clear entire playlist
     */
    virtual void clearAll() = 0;

    /**
     * add a playlist
     */
    virtual void addToFile(std::string playlistTitleIn,SongsLinkedNode *aPointerIn) = 0;

    /**
     * remove a playlist
     */
    virtual void deleteFromFile(std::string playlistTitleIn) = 0;


    /**
     * create a random list with random songs in other list
     * @param listName
     */
    void RandomList(std::string playlistTitleIn);

};


#endif //INC_220GROUPPROJ_COLLPLAYLISTS_H
