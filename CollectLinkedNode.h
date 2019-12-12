//
// Created by leianna chen on 2019/12/12.
//

#ifndef INC_220GROUPPROJ_COLLECTLINKEDNODE_H
#define INC_220GROUPPROJ_COLLECTLINKEDNODE_H
#include "PlaylistLinkedQueue.h"

class CollectLinkedNode {
private:
    std::string playlistTitle;
    SongsLinkedNode *playlistLink;
    CollectLinkedNode* next;

public:
    CollectLinkedNode(std::string playlistTitleIn,SongsLinkedNode *aPointer);
    CollectLinkedNode(const CollectLinkedNode& nodeToCopy); //only copies item, next is set to nullptr
    std::string getPlaylistTitle();
    SongsLinkedNode* getPlaylistLink();
    CollectLinkedNode* getNext();
    void setPlaylistTitle(std::string newPlaylistTitle);
    void setPlaylistLink(SongsLinkedNode *newPointer);
    void setNext(CollectLinkedNode* newNext);
};


#endif //INC_220GROUPPROJ_COLLECTLINKEDNODE_H
