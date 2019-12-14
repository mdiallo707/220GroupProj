//
// Created by Mariama Diallo on 12/4/19.
//  PlaylistLinkedqueue implementation file
//
#include <string>
#include <fstream>
#include <iostream>
#include "PlaylistLinkedQueue.h"
#include "SongsLinkedNode.h"


//Creates an empty playlist queue
PlaylistLinkedQueue::PlaylistLinkedQueue(){
    front = nullptr;
    end = nullptr;
}


//adds a song to the end of the queue
void PlaylistLinkedQueue::enqueue(std::string songToAdd, std::string artistToAdd, double slToAdd){
    SongsLinkedNode* newNode = new SongsLinkedNode(songToAdd,  artistToAdd,  slToAdd);
    //if front is nullptr, end should be nullptr too
    if (front == nullptr){
        front = newNode;
        end = newNode;
    }
    else {
        end->setNext(newNode);
        end = newNode;
    }
}

//takes an item off the front of the queue and returns it
//throws out_of_range exception if the queue is empty
std::string PlaylistLinkedQueue::dequeue(){
    //TODO, consider cases where:
    // the queue is empty
    // the queue has one item
    // the queue has many items

    if( isEmpty()){
        throw std::out_of_range("queue is empty");
    }
    else {
        if(front == end){
            end = nullptr;
        }
        std::string str=front->getSongTitle();
        SongsLinkedNode *newNode = front;
        front = newNode->getNext();
        delete newNode;
        return str;
    }

}
std::string PlaylistLinkedQueue::removeSong(std::string plName, std::string artistName, std::string songTitle) {
    std::cout<<plName +" "+artistName+" " +songTitle +" "+"deleting song from playlist"<<std::endl;
    if( isEmpty()){
        throw std::out_of_range("queue is empty");
    }
    else {
        if(front == end){
            end = nullptr;
        }
        std::string str=front->getSongTitle();
        SongsLinkedNode *newNode = front;
        front = newNode->getNext();
        delete newNode;
        return str;
    }


}

//returns true if the queue has no items, false otherwise
bool PlaylistLinkedQueue::isEmpty(){
    return front == nullptr;
}
SongsLinkedNode* PlaylistLinkedQueue::playNext(){
     return front->getNext();

}

void PlaylistLinkedQueue::playNextSong(std::string plName) {
    SongsLinkedNode *current = this->front;
    current = current->getNext();

    std::cout << plName + "next song" << std::endl;

    current->printSongs();
    front->getNext();
    dequeue();


}




/**
    * calculates the duration of a playlist
    * @return the duration
    */
double PlaylistLinkedQueue ::  calcDuration() {
    double totalDuration = 0.0;

    SongsLinkedNode *current = this->front;

    while (current != nullptr) {
        totalDuration += current->getDuration();
        current = current->getNext();
    }
    return totalDuration;
}

/**
    * displays all songs in a playlist
    * @return a string representation of all songs listed
    */

void PlaylistLinkedQueue ::  allSongsInPlaylist(std::string namePL){
    SongsLinkedNode* current=this->front;
    int x=1;
    std::cout<<namePL+"full playlist"<<std::endl;

    while(current!= nullptr){
        std::cout<<x<<std::endl;
        current->printSongs();
        current=current->getNext();
        x+=1;

    }

}


void PlaylistLinkedQueue ::ReadFromFile(){
    std::ifstream in;
    in.open("ListofSongs.txt") ;
    std::string songTitle, artistName, duration;

    std::cout << in.is_open() << std::endl;

    while (!in.eof())
    {
        getline(in, songTitle, '\n');
        getline(in, artistName, '\n');
        getline(in, duration, '\n');

        std::cout << songTitle << " | " << artistName << " | " << duration << std::endl;
        SongsLinkedNode newSong(songTitle, artistName, std::stod(duration));

    }


}

void PlaylistLinkedQueue :: WriteToFile(){

}


