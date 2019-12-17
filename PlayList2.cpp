//
// Created by emurray2 on 12/15/2019.
//
//This edition has the necessary properties for a particular playlist
// to be found by the collection and properties that are needed
//for the userInterface
#include "PlayList2.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
PlayList2::PlayList2(std::string playListName){
    front = nullptr;
    end = nullptr;
    double duration;
    this->playListName=playListName;
}

string PlayList2::getPlayListName() {
    return this->playListName;
}
//adds a song to the end of the queue
void PlayList2::enqueue(std::string songToAdd, std::string artistToAdd, double slToAdd){
    Songs* newNode = new Songs(artistToAdd,  songToAdd,  slToAdd);
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
std::string PlayList2::dequeue(){
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
        std::string str=front->getSongName()+'\n'+front->getArtistName();
        cout<<str<<endl;
        std::string str2=front->getArtistName();
        //cout<<" "+str2<<endl;

        Songs *newNode = front;
        front = newNode->getNext();
        delete newNode;
        return str;
    }

}
std::string PlayList2::removeSong(std::string plName, std::string artistName, std::string songTitle) {
    std::cout<<plName +" "+artistName+" " +songTitle +" "+"deleting song from playlist"<<std::endl;
    if( isEmpty()){
        throw std::out_of_range("queue is empty");
    }
    else {
        if(front == end){
            end = nullptr;
        }
        std::string str=front->getSongName();
        Songs *newNode = front;
        front = newNode->getNext();
        delete newNode;
        return str;
    }


}

//returns true if the queue has no items, false otherwise
bool PlayList2::isEmpty(){
    return front == nullptr;
}
Songs* PlayList2::playNext(){
    return front->getNext();

}

Songs* PlayList2::returnBegin(){
    Songs* copyFront = front;
    return copyFront;
}

//prints the next song information, then that song is deleted
void Songs::playNextSong(std::string plName) {
//   // Songs *current = front;
//   // current = current->getNext();
//   Songs*present=
//
//    //std::cout << plName + "next song" << std::endl;
//
////    current->printSongs();
////    front->getNext();
////    dequeue();


}
///Liz: This  class in particular needs PlayListLinkedQueue to have a name to go into a specific
///playlist not just anything
///the parameters are based off of the addCommand
void PlayList2::addSongUser(string playListName, string artistName, string songTitle ){

    enqueue(songTitle,artistName,5);
}




/**
    * calculates the duration of a playlist
    * @return the duration
    */
double PlayList2 ::  calcDuration() {
    double totalDuration = 0.0;

    Songs *current = this->front;

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

void PlayList2 ::  allSongsInPlaylist(std::string namePL){
    ///Playlist needs a property name for this to apply to a specific playlist-liz
    ///the string is just being used to print
    Songs* current=this->front;
    int x=1;
    std::cout<<namePL+"full playlist"<<std::endl;

    while(current!= nullptr){
        std::cout<<x<<std::endl;
       // current->printSongs();
        current=current->getNext();
        x+=1;

    }

}

//Reads the ListofSongs.txt file
void PlayList2 ::ReadFromFile(std::string playListName){
    std::ifstream in;
    in.open("ListofSongs.txt") ;
    std::string songTitle, artistName, duration;

//    std::cout << in.is_open() << std::endl;
    //PlayList newSonglist = PlaylistLinkedQueue();
    PlayList2 newSongsList(playListName);
    while (!in.eof())
    {
        getline(in, songTitle, '\n');
        getline(in, artistName, '\n');
        getline(in, duration, '\n');
        enqueue(songTitle, artistName, std::stod(duration));

    }


}
//Writes to the ListofSongs.txt file
void PlayList2 :: WriteToFile(std::string songToAdd, std::string artistToAdd, std::string slToAdd){
    //test if it's in library
    std::ifstream in;
    in.open("ListofSongs.txt") ;
    std::string songTitle, artistName, duration;
    while (!in.eof())
    {
        getline(in, songTitle, '\n');
        getline(in, artistName, '\n');
        getline(in, duration, '\n');
        if(songTitle==songToAdd&& artistName==artistToAdd && duration==slToAdd){
            throw std::out_of_range("WriteToFile: song repeats");
        }
    }
    //write a song
    std::ofstream writeFile ("ListofSongs.txt",std::ios_base::app | std::ios_base::out);
    if (writeFile.is_open())
    {
        writeFile <<"\n"<<songToAdd<<"\n";
        writeFile << artistToAdd<<"\n";
        writeFile << slToAdd;
        writeFile.close();
    }
    else{
        throw std::out_of_range("WriteToFile: Files not open");
    }
}





