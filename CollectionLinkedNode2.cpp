//
// Created by emurray2 on 12/13/2019.
//

#include "CollectionLinkedNode2.h"
//
// Created by leianna chen on 2019/12/12.
//

#include "CollectionLinkedNode2.h"
#include <string>

CollectLinkedNode2::CollectLinkedNode2(PlaylistLinkedQueue aPointer){
    this->playlistLink = aPointer;
    next = nullptr;
}

CollectLinkedNode2::CollectLinkedNode2(const CollectLinkedNode2& playlistLinkToCopy){
    playlistLink = playlistLinkToCopy.playlistLink;
    next = nullptr;
}
std::string CollectLinkedNode2::getPlaylistTitle(){
    return playlistTitle;
}
PlaylistLinkedQueue CollectLinkedNode2::getPlaylistLink(){
    return playlistLink;
}

CollectLinkedNode2* CollectLinkedNode2::getNext(){
    return next;
}

void CollectLinkedNode2::setPlaylistTitle(std::string newPlaylistTitle){
    playlistTitle = newPlaylistTitle;
}

void CollectLinkedNode2::setPlaylistLink(PlaylistLinkedQueue newPointer){
    playlistLink = newPointer;
}

void CollectLinkedNode2::setNext(CollectLinkedNode2* newNext){
    next = newNext;
}
