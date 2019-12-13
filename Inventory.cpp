//
// Created by emurray2 on 12/11/2019.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include "Inventory.h"
#include "SongsLinkedNode.h"

using namespace std;

Inventory::Inventory(){
    this->end= nullptr;
    this->front= nullptr;
    int count=0;

}

//void Inventory::removeSong(string artistName,string songName) {
//    Songs*temp= front;
//    while(temp!= nullptr){
//        Songs*oldTemp=temp;
//        if(temp->getArtistName()==artistName&temp->getSongName()==songName){
//            //
//            Songs*newNext= temp->getNext();
//            oldTemp->setNext(newNext);
//
//        }
//    }
//    temp=temp->getNext();
//}

void Inventory::addSong(std::string artistName,std::string title, double duration){
    SongsLinkedNode* newNode = new SongsLinkedNode (artistName,title,duration);
    SongsLinkedNode*temp=front;
    if (front == nullptr){
        front = newNode;
        end = newNode;
    }
    else {
        end->setNext(newNode);
        end = newNode;}
}
//
//void Inventory::particularArtist(std::string artistName) {
//    Songs*temp=front;
//    while(temp!=nullptr){
//        if(temp->getArtistName()==artistName){
//            cout<<temp->getArtistName()+" "+ temp->getSongName()<<endl;
//        }
//        temp=temp->getNext();
//    }
//}
//
//
//void Inventory::check() {
//    count=0;
//    // can  be used for display and to check alphabetical order
//    Songs*temp=front;
//    while(temp!= nullptr){
//
//
//        cout<<temp->getArtistName()+"  "+ temp->getSongName()<<endl;
//        //count=count+1;
//        count=count+1;
//        temp=temp->getNext();
//        //cout<<end->getArtistName()+ " "+end->getSongName()<<endl;
//    }
//    cout<<count;
//}
//
//
//
//
//
//
