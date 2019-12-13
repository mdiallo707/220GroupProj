//
// Created by emurray2 on 12/11/2019.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include "Songs.h"
#include "Inventory.h"
#include "UserInterface.h"

using namespace std;

Inventory::Inventory(){
    this->end= nullptr;
    this->front= nullptr;
    int count;

}

void Inventory::removeSong(string artistName,string songName) {
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

void Inventory::addSong(std::string artistName,std::string title, double duration){
    Songs* newNode = new Songs (artistName,title,duration);
    Songs*temp=front;
    if (front == nullptr){
        front = newNode;
        end = newNode;
    }
    else {
        end->setNext(newNode);
        end = newNode;
        }


    }
}

void Inventory::particularArtist(std::string artistName) {
    Songs*temp=front;
    while(temp!=nullptr){
        if(temp->getArtistName()==artistName){
            cout<<temp->getArtistName()+" "+ temp->getSongName()<<endl;
        }
        temp=temp->getNext();
    }
}
int Inventory::countSongs() {
    count=0;
    // can  be used for display and to check alphabetical order
    Songs*temp=front;
    while(temp!= nullptr){


        //count=count+1;
        count=count+1;
        temp=temp->getNext();
        //cout<<end->getArtistName()+ " "+end->getSongName()<<endl;
    }
    return count;
}

void Inventory::check() {
    // can  be used for display and to check alphabetical order
    Songs*temp=front;
    while(temp!= nullptr){


        cout<<temp->getArtistName()+"  "+ temp->getSongName()<<endl;


        temp=temp->getNext();
        //cout<<end->getArtistName()+ " "+end->getSongName()<<endl;
    }
}






