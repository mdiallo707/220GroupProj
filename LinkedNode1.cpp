//
// Created by Toby Dragon on 10/17/17.
//
#include "LinkedNode.h"

LinkedNode::LinkedNode(std::string title,std::string artist,double songLength){
    this->title=title;
    this->artist=artist;
    this->songLength=songLength;
    next = nullptr;
}

LinkedNode::LinkedNode(const LinkedNode& nodeToCopy){
    title= nodeToCopy.title;
    artist= nodeToCopy.artist;
    songLength= nodeToCopy.songLength;
    next = nullptr;
}
std::string LinkedNode::getTitle(){
    return title;

}

/**
 * gets artist name
 */
std::string LinkedNode::getArtist(){
    return artist;

}

/**
* gets the song length
*/

double LinkedNode::getDuration(){
    return songLength;

}


LinkedNode* LinkedNode::getNext(){
    return next;
}

/**
* sets song title
*/
void LinkedNode::setSongTitle(std::string newTitle){
    title=newTitle;

}

/**
 * sets artist name
 */
void LinkedNode:: setArtistName(std::string newArtist){
    artist=newArtist;

}

/**
 * sets song length
 */
void LinkedNode::setSongLength(double newSongLength){
    songLength=newSongLength;

}
void LinkedNode::setNext(LinkedNode* newNext){
    next = newNext;
}
