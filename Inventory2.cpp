//
// Created by emurray2 on 12/11/2019.
//The best version of the Inventory (no time to update with everything else)

#include <iostream>
#include <string>
#include <stdexcept>
#include "Songs.h"
#include "Inventory2.h"
using namespace std;

Inventory2::Inventory2(){
    this->end= nullptr;
    this->front= nullptr;
    int count=0;

}

void Inventory2::removeSong(string artistName, string songName) {
    if (front->getArtistName() == artistName & front->getSongName() == songName) {
        if (front == end) {
            front = nullptr;
            end = nullptr;
        } else if (front != end) {
            Songs *oldfront = front;
            front = front->getNext();
            delete oldfront;
        }
    } else if (songName == end->getSongName() & artistName == end->getArtistName()) {

        Songs *temp = front;
        while (temp->getNext() != end) {
            temp = temp->getNext();
        }
        //delete end;
        end = temp;
        end->setNext(nullptr);
    } else {
        Songs *temp = front;
        while (temp->getArtistName() != artistName & temp->getSongName() != songName){
            temp = temp->getNext();

        //if (temp->getNext()->getArtistName() == artistName & temp->getNext()->getSongName() == songName) {

//            } else {
//                cout << "Song is not in the inventory." << endl;
//            }
    }
       // cout<<temp->getArtistName();
       delete temp->getNext();
        temp->setNext(temp->getNext()->getNext());
       // delete temp;
        //temp->setNext(temp);
}

    }






void Inventory2::addSong(std::string artistName, std::string title, double duration) {
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


            while(temp->getNext()->getArtistName()<newNode->getArtistName()){
                temp=temp->getNext();
                }
            newNode->setNext(temp->getNext());
            temp->setNext(newNode);
            }
    }
}

    void Inventory2::currentSongs() {
    count=0;

    Songs*temp=front;
    if (front== nullptr){cout<<"Library is empty"<<endl;}
    else{
    while (temp!= nullptr){
    cout<<temp->getArtistName()<<endl;
    temp=temp->getNext();
    count=count+1;
    }}
}


void Inventory2::particularArtist(string artistName) {
    Songs*temp=front;
    while(temp!=nullptr){
        if(temp->getArtistName()==artistName){
            cout<<temp->getArtistName()+" "+ temp->getSongName()<<endl;
        }
        temp=temp->getNext();
    }
}

void Inventory2::particularSong(string artistName, string songTitle) {
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


string Inventory2::removeFrontArtistName(){
    std::string oldfront=front->getArtistName();
    front=front->getNext();
    return oldfront;
}

std::string Inventory2::frontSong(){
   std::string str="";
    if (front!= nullptr){
    return front->getArtistName();}
    return "";
}

void Inventory2::clearLibrary() {
   if(front!= nullptr){
       Songs*newNode=front;
       this->front=front->getNext();
       delete newNode;
   }
    front= nullptr;
    end= nullptr;
   }



bool Inventory2:: isEmpty(){
    if (this->front== nullptr& this->end== nullptr){
        return true;
    }
    return  false;
}
bool Inventory2:: isSongIn(std::string artistName, std::string songTitle){
    if(front== nullptr& end== nullptr){
        return false;
    }
    else if(front->getSongName()==songTitle&front->getArtistName()==artistName){
        return true;
    }
    else if(end->getArtistName()==artistName&end->getSongName()==songTitle){
        return true;
    }
    else {
        Songs*temp=front->getNext();
        while(temp->getNext()!= nullptr){
            if (temp->getArtistName()==artistName&temp->getSongName()==songTitle){
            return true;}
            temp=temp->getNext();
        }
    }
}