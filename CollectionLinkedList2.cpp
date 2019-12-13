//
// Created by emurray2 on 12/13/2019.
//

#include "CollectionLinkedList2.h"
//
// Created by leianna chen on 2019/12/12.
//
#include <string>
#include <fstream>
#include <iostream>
#include "CollectionLinkedNode2.h"
#include "CollectionLinkedNode2.h"

/**
    * Constructor
*/
CollectLinkedList2::CollectLinkedList2(){
    this->front = nullptr;
    this->currCount=0;

}

/**
 * appends the new item to the end of the list
 * @post the list has an additional value in it, at the end
 */
void CollectLinkedList2::addPlaylist( PlaylistLinkedQueue aPointerIn){
    CollectLinkedNode2* newNode = new CollectLinkedNode2( aPointerIn);
    if(isEmpty()){
        this->front = newNode;
    }
    else{//--------------------------***reinterpret_cast<CollectLinkedNode *>
        CollectLinkedNode2* tempNode= this->front;
        while(tempNode->getNext()!= nullptr){
            tempNode=tempNode->getNext();
        }
        tempNode->setNext(newNode);
    }
    this->currCount+=1;
}

/**
 * gets a value from the list
 * @param index the location from which to get the value
 * @return a copy of the item at index
 * @throws out_of_range exception if index is invalid
 */
std::string CollectLinkedList2::getTitleValueAt(int index){

    CollectLinkedNode2* node= front;
    if(index<0) {
        throw std::out_of_range("getTitleValueAt");
    }
    if(!isEmpty()) {
        for (int i = 0; i < index; i++) {
            if (node->getNext()== nullptr){
                throw std::out_of_range("getTitleValueAt");
            }
            node = node->getNext();
        }
        return node->getPlaylistTitle();
    }
    else{
        throw std::out_of_range("getTitleValueAt");
    }
}
PlaylistLinkedQueue CollectLinkedList2::getAddressValueAt(int index){

    CollectLinkedNode2* node= front;
    if(index<0) {
        throw std::out_of_range("getAddressValueAt");
    }
    if(!isEmpty()) {
        for (int i = 0; i < index; i++) {
            if (node->getNext()== nullptr){
                throw std::out_of_range("getAddressValueAt");
            }
            node = node->getNext();
        }
        return node->getPlaylistLink();
    }
    else{
        throw std::out_of_range("getAddressValueAt");
    }
}

/**
 * gives a string representation of the current list
 * @returns a string representing the given list in the exact format shown below
 * {1, 2, 3, 4, 5}
 */
std::string CollectLinkedList2::PrintAllTitle(){
    std::string result = "{";

    CollectLinkedNode2* tempNode= front;
    if(itemCount()<1){
        result="{}";
        return result;
    }
    else{
        while(tempNode->getNext()!= nullptr){
            result+=tempNode->getPlaylistTitle()+", ";
            tempNode=tempNode->getNext();
        }
        result+=tempNode->getPlaylistTitle();
        result+="}";
        return result;
    }

}

/**
 * checks if there are any valid items in the list
 * @return true if there are no valid items in the list, false otherwise
 */
bool CollectLinkedList2::isEmpty(){
    if(itemCount()==0){
        return true;
    }else{
        return false;
    }
}

/**
 * returns a count of valid items currently in the list
 * @returns the number of valid items in the list
 */
int CollectLinkedList2::itemCount(){
    return currCount;
}

/**
 * makes the list empty of valid items
 * @post the list is empty, such that isEmpty() == true
 */
void CollectLinkedList2::clearList(){
    if(front!=nullptr){

        CollectLinkedNode2* tempNode= front;
        CollectLinkedNode2* nextNode=front->getNext();

        while(tempNode->getNext()!= nullptr){
            delete tempNode;
            tempNode=nextNode;
            nextNode=tempNode->getNext();
        }
        delete tempNode;
        front= nullptr;
    }
    currCount=0;
}

/**
 * Searches an int array for a certain value
 * @return the index of the first occurrence of numToFind if it is present, otherwise returns -1
 */
int CollectLinkedList2::find(std::string playlistTitleIn){
    int result = -1;

    CollectLinkedNode2* tempNode = front;
    if (front != nullptr){
        result = result+1;
        while(tempNode->getNext() != nullptr){
            if(tempNode->getPlaylistTitle() == playlistTitleIn){
                return result;
            }
            result +=1;
            tempNode = tempNode->getNext();
        }
        if(tempNode->getPlaylistTitle() == playlistTitleIn){
            return result;
        }
        return -1;
    }
    return result;
}


/**
 * removes the item at index from the list, and returns a copy of that item
 * @param index the location from which to get the value
 * @post the item at index is removed from the list, everything else is shifted down one
 * @return a copy of the item at index
 * @throws out_of_range exception if index is invalid
 */
std::string CollectLinkedList2::removeValueAt(int index){
    CollectLinkedNode2 *tempNode = this->front;
    CollectLinkedNode2 *tempNodeBefore = this->front;
    if (index < 0 || index > currCount || isEmpty()) {
        throw std::out_of_range("Index Invalid");
    }
    if (index == 0) {
        std::string result = front->getPlaylistTitle();
        front=front->getNext();
        this->currCount-=1;
        return result;
    } else {
        for (int i = 1; i < index; i++) {
            tempNodeBefore = tempNode;
            tempNode = tempNode->getNext();
        }
        std::string itemReturn = tempNode->getPlaylistTitle();
        tempNodeBefore->setNext(tempNode->getNext());
        this->currCount -= 1;
        return itemReturn;
    }
}
void CollectLinkedList2::removeEmpty(){
    CollectLinkedNode2 *tempNode = this->front;
    int countIndex = 1;
    while (tempNode != nullptr){
        if(tempNode->getPlaylistLink().isEmpty()){
            removeValueAt(countIndex);
        }
        tempNode = tempNode->getNext();
        countIndex = countIndex +1;
    }
}
void CollectLinkedList2::displayAll(){
    if(currCount!=0) {
        int index = 1;
        CollectLinkedNode2 *tempNode = this->front;
        while (tempNode != nullptr) {
            std::cout << "Playlist: " << index << std::endl;
            tempNode->getPlaylistLink().allSongsInPlaylist(tempNode->getPlaylistTitle());
            tempNode = tempNode->getNext();
            index = index + 1;
        }
    }

}
void CollectLinkedList2::displaySelect(std::string playlistTitleIn){
    std::string SongsList;
    int address = find(playlistTitleIn);
    getAddressValueAt(address).allSongsInPlaylist(SongsList);
}

void CollectLinkedList2::RandomList(std::string playlistTitleIn, double Duration){
    double countD = 0;
    while (countD<=Duration){

    }
    if(currCount!=0) {
        CollectLinkedNode2 *tempNode = this->front;
        while (tempNode != nullptr) {
            tempNode->getPlaylistLink().allSongsInPlaylist(tempNode->getPlaylistTitle());
            tempNode = tempNode->getNext();
        }
    }
}

