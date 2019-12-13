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

class CollectPlaylists {
private:
    //list of playlist name in txt file
    //Private to disable copying and assigning from outside class, don't implement these methods



public:

//    //pointer to the playlist
//    CollectLinkedList listPlaylists = CollectLinkedList();
    CollectPlaylists(){}

    /**
     * check if the collection of playlist is empty
     * @return
     */
    virtual bool isLinkEmpty() = 0;

    /**
     * display all the songs - title and duration
     */
    virtual std::string displayAll() = 0;

    /**
     * display selected playlist - song title and duration
     */
    virtual std::string displaySelect(std::string playlistTitleIn) = 0;

    /**
     * clear entire playlist
     */
    virtual void clearAll() = 0;

    /**
     * add a playlist
     */
    virtual void addToFile(std::string playlistTitleIn,SongsLinkedNode *aPointerIn) = 0;

    /**
     * remove a playlist if it's empty
     */
    virtual CollectLinkedNode* deleteFromFile() = 0;


    /**
     * create a random list with random songs in other list
     * @param listName
     */
    virtual std::string RandomList(std::string playlistTitleIn, double Duration) = 0;

};


#endif //INC_220GROUPPROJ_COLLPLAYLISTS_H
