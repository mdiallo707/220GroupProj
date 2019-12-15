//
// Created by emurray2 on 12/10/2019.
//
#include <string>

#include "Songs.h"
Songs:: Songs(std::string artistName, std::string songName, double duration){
    next= nullptr;
    this->songName=songName;
    this->artistName=artistName;
    this->duration=duration;
}
std::string Songs::getSongName(){
    return songName;
}
std::string Songs::getArtistName(){
    return this->artistName;}



double Songs::getDuration(){
    return this->duration;
}


Songs*Songs::getNext(){
    return this->next;
}
void Songs::setArtistName(std::string artistName){
    this->artistName=artistName;
}
void Songs::setSongName(std::string songName){
    this->songName=songName;
}
void Songs:: setPlayCount(int count){
    this->playCounter=count;
}
Songs * Songs:: setNext(Songs* newNext){
    this->next=newNext;
}
void Songs:: incrementPlayCount(){
    this->playCounter=this->playCounter+1;
}
void Songs:: setDuration(double duration){
    this->duration=duration;
}