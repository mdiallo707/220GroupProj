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

void Inventory::clearLibrary(){
    if(front!=end){
        SongsLinkedNode*newNode=front;
        this->front=front->getNext();
        delete newNode;
    }
    delete front;
    delete end;


}

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

void Inventory::particularArtist(std::string artistName) {
    SongsLinkedNode*temp=front;
    while(temp!=nullptr){
        if(temp->getArtistName()==artistName){
            cout<<temp->getArtistName()+" "+ temp->getSongTitle()<<endl;
        }
        temp=temp->getNext();
    }
}

void Inventory::particularAS(std::string artistName,string songtitle) {
    SongsLinkedNode*temp=front;
    while(temp!=nullptr){
        if(temp->getArtistName()==artistName&temp->getSongTitle()==songtitle){
            cout<<temp->getArtistName()+" "+ temp->getSongTitle()<<endl;
            cout<< "The duration of the song is: ";
            cout<<temp->getDuration()<<endl;

        }
        temp=temp->getNext();
    }
}


void Inventory::check() {
    count=0;
    // can  be used for display and to check alphabetical order
    SongsLinkedNode*temp=front;
    while(temp!= nullptr){


        cout<<temp->getArtistName()+"  "+ temp->getSongTitle()<<endl;
        //count=count+1;
        count=count+1;
        temp=temp->getNext();
        //cout<<end->getArtistName()+ " "+end->getSongName()<<endl;
    }
}






