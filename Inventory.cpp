//
// Created by emurray2 on 12/11/2019.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include "Songs.h"
#include "Inventory.h"
using namespace std;

Inventory2::Inventory2(){
    this->end= nullptr;
    this->front= nullptr;

}

void Inventory2::removeSong(string artistName,string songName) {
    Songs*temp= front;
    while(temp!= nullptr){
        Songs*oldTemp=temp;
        if(temp->getArtistName()==artistName&temp->getSongName()==songName){
            //
           Songs*newNext= temp->getNext();
           oldTemp->setNext(newNext);

        }
    }
    temp=temp->getNext();
}

void Inventory2::addSong(std::string artistName,std::string title, double duration){
    Songs* newNode = new Songs (artistName,title,duration);
    Songs*temp=front;
    if (front == nullptr){
        front = newNode;
        end = newNode;
    }
    else {
//break this up for the front , middle and end
        if (newNode->getSongName() < front->getSongName()) {
            Songs*oldnode=front;
            newNode->setNext(oldnode);
            front=newNode;}
        if(newNode->getSongName()>front->getSongName()){
            Songs*old=front->getNext();
            front->setNext(newNode);
            newNode->setNext(old);

        }

        if(newNode->getSongName()>end->getSongName()){
            Songs*old=end;
            end=newNode;
            old->setNext(newNode);

        }


    }
}

    void Inventory2::particularArtist(std::string artistName) {
    Songs*temp=front;
    while(temp!=nullptr){
        if(temp->getArtistName()==artistName){
            cout<<temp->getArtistName()+" "+ temp->getSongName()<<endl;
        }
        temp=temp->getNext();
    }
}

    void Inventory2::check() {
    // can  be used for display and to check alphabetical order
      Songs*temp=front;
      while(temp!= nullptr){


       cout<<temp->getArtistName()+"  "+ temp->getSongName()<<endl;


          temp=temp->getNext();
        //cout<<end->getArtistName()+ " "+end->getSongName()<<endl;
      }
     }






