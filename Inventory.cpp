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
void Inventory::particularSong(string artistName,string songTitle) {
    Songs*temp=front;
    while(temp!=nullptr){
        if(temp->getArtistName()==artistName&temp->getSongName()==songTitle){
            cout<<temp->getArtistName()+" "+ temp->getSongName()<<endl;
            cout<<"The length of the song is";
            cout<<temp->getDuration();
        }
        temp=temp->getNext();
    }
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

void Inventory::addSong(std::string artistName,std::string title, double duration) {
    Songs *newNode = new Songs(artistName, title, duration);
    Songs *temp = front;
    if (front == nullptr) {
        front = newNode;
        end = newNode;
    } else {
        temp = front;
        //Songs *ahead;


        if (newNode->getArtistName() < front->getArtistName()) {

            newNode->setNext(front);
            front = newNode;}

        else if (newNode->getArtistName() > end->getArtistName()) {
            end->setNext(newNode);
            end = newNode;
        }
        else{
            temp=front;

            //while loop
            //while temp.getNext.getArtistName < newNode.getArtistName
            //temp = temp.getNext
            while(temp->getNext()->getArtistName()<newNode->getArtistName()){
                temp=temp->getNext();
            }
            newNode->setNext(temp->getNext());
            temp->setNext(newNode);
        }
    }
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


void Inventory::currentSongs() {
    count=0;
    // can  be used for display and to check alphabetical order
    SongsLinkedNode*temp=front;
    while(temp!= nullptr){


        cout<<temp->getArtistName();
        //count=count+1;
        count=count+1;
        temp=temp->getNext();
        //cout<<end->getArtistName()+ " "+end->getSongName()<<endl;
    }
}






