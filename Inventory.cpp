//
// Created by emurray2 on 11/28/2019.
//
#include <iostream>

#include "Inventory.h"
#include "Songs.h"

Inventory::Inventory(){
    front = nullptr;
    end = nullptr;
}

void Inventory:: clearLibrary(){
    if(front!=end){
        Songs*newNode=front;
        this->front=front->getNext();
        delete newNode;
    }
    delete front;
    delete end;
    std::cout << "The library has been cleared " ;

}

std::string Inventory:: displayInventory(){
return "";
}

// have it alphabetize later
void Inventory::enqueue(std::string artistName,std::string title, double duration){
    Songs* newNode = new Songs(artistName,title,duration);
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

void addToLibrary(std::string artistName,std::string artistSong, int duration){

}