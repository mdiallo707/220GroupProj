//
// Created by leianna chen on 2019/12/12.
//

#ifndef PROJECT_COLLECTLINKEDNODE_H
#define PROJECT_COLLECTLINKEDNODE_H
#include "PlaylistLinkedQueue.h"
//this class is to work with the objects that we currently_Liz
//Map is required to allow user to create new object-Liz


class CollectLinkedNode2 {
private:

    std::string playlistTitle;
    PlaylistLinkedQueue playlistLink;
    CollectLinkedNode2* next;

public:
    CollectLinkedNode2(std::string playlistTitleIn,PlaylistLinkedQueue aPointer);
    CollectLinkedNode2(const CollectLinkedNode2& nodeToCopy); //only copies item, next is set to nullptr
    std::string getPlaylistTitle();
    PlaylistLinkedQueue getPlaylistLink();
    CollectLinkedNode2* getNext();
    void setPlaylistTitle(std::string newPlaylistTitle);
    void setPlaylistLink(PlaylistLinkedQueue newPointer);
    void setNext(CollectLinkedNode2* newNext);

    CollectLinkedNode2(PlaylistLinkedQueue aPointer);
};


#endif //PROJECT_COLLECTLINKEDNODE_H
