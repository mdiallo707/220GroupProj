//
// Created by emurray2 on 12/13/2019.
//

#include "CollectionLinkedNode2.h"
//
// Created by leianna chen on 2019/12/12.
//

#include "CollectLinkedNode.h"
#include <string>

CollectLinkedNode::CollectLinkedNode(PlaylistLinkedQueue aPointer){
    this->playlistLink = aPointer;
    next = nullptr;
}

CollectLinkedNode::CollectLinkedNode(const CollectLinkedNode& playlistLinkToCopy){
    playlistLink = playlistLinkToCopy.playlistLink;
    next = nullptr;
}
std::string CollectLinkedNode::getPlaylistTitle(){
    return playlistTitle;
}
PlaylistLinkedQueue CollectLinkedNode::getPlaylistLink(){
    return playlistLink;
}

CollectLinkedNode* CollectLinkedNode::getNext(){
    return next;
}

void CollectLinkedNode::setPlaylistTitle(std::string newPlaylistTitle){
    playlistTitle = newPlaylistTitle;
}

void CollectLinkedNode::setPlaylistLink(PlaylistLinkedQueue newPointer){
    playlistLink = newPointer;
}

void CollectLinkedNode::setNext(CollectLinkedNode* newNext){
    next = newNext;
}
