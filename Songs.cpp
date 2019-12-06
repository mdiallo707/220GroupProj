//
// Created by emurray2 on 11/28/2019.
//
#include <string>

#include "Songs.h"
Songs::Songs(std::string artistN,std::string songN,int duration){
 this->artistName=artistN;
 this->songName=songN;
 this->duration=duration;



}
Songs::Songs(const Songs & nodeToCopy){}; //only copies item, next is set to nullptr





std::string Songs:: getSongName(){
    return this->songName;
};
int Songs::getPlayCount(){
    return this->playCount;
}
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
    this->playCount=count;
}
void Songs:: setNext(Songs* newNext){
    this->next=newNext;
}
void Songs:: incrementPlayCount(){
    this->playCount=this->playCount+1;
}
void Songs:: setDuration(double duration){
    this->duration=duration;
}