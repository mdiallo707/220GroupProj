//
// Created by emurray2 on 12/11/2019.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include "Inventory.h"
#include "SongsLinkedNode.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

Inventory::Inventory(){
    this->end= nullptr;
    this->front= nullptr;
    int count=0;

}
void Inventory::particularSong(string artistName,string songTitle) {
    SongsLinkedNode*temp=front;
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
    // can  be used for display and to check alphabetical order
    SongsLinkedNode*temp=front;
    if(front== nullptr&end== nullptr){
        cout<<"Library is emppty";
    }
    while(temp!= nullptr){


       // cout<<temp->getArtistName() +""+temp->getArtistName();
        std::string str=temp->getSongName()+'\n'+temp->getArtistName();
        cout<<str<<endl;
        cout<<'\n';
        //count=count+1;
        temp=temp->getNext();
        //cout<<end->getArtistName()+ " "+end->getSongName()<<endl;
    }
}

void Inventory::countSongs() {
    SongsLinkedNode*temp=front;
    while(temp!= nullptr){
        this->count=this->count+1;
    }
}


void Inventory::addSong(std::string artistName,std::string title, double duration) {
    SongsLinkedNode *newNode = new SongsLinkedNode(artistName, title, duration);
    SongsLinkedNode *temp = front;
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


void Inventory::removeSong(string artistName,string songName) {
    if (front->getArtistName()==artistName&front->getSongName()==songName) {
        if(front==end){
            front= nullptr;
            end= nullptr;
        }
    }
    else if(songName==end->getSongName()&artistName==end->getArtistName()) {

        SongsLinkedNode*temp=front;
        while(temp->getNext()!=end){
            temp=temp->getNext();
        }
        delete end;
        end=temp;
        end->setNext(nullptr);}

    else{
        SongsLinkedNode*temp=front->getNext();
        while(temp->getNext()->getArtistName()!=artistName&temp->getNext()->getSongName()!=songName){
            temp=temp->getNext();
        }
        if(temp->getNext()->getArtistName()==artistName&temp->getNext()->getSongName()==songName){
            delete temp->getNext();
            temp->setNext(temp->getNext()->getNext());}
        else{
            cout<<"Song is not in the inventory."<<endl;
        }




    }

}

void Inventory ::ReadFromFile(std::string playListName) {
    std::ifstream in;
    in.open("ListofSongs.txt");
    std::string songTitle, artistName, duration;

//    std::cout << in.is_open() << std::endl;
    //PlayList newSonglist = PlaylistLinkedQueue();
    Inventory newSongsList();
    while (!in.eof()) {
        getline(in, songTitle);
        getline(in, artistName);
        getline(in, duration);
        addSong(songTitle, artistName, std::stod(duration));

    }
}