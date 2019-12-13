//
// Created by leianna chen on 2019/12/12.
//

#include "CollectLinkedList.h"
/**
    * Constructor
*/
CollectLinkedList::CollectLinkedList(){
    this->front = nullptr;
    this->currCount=0;

}

//Destructor
CollectLinkedList::~CollectLinkedList(){
    delete front;
}

/**
 * appends the new item to the end of the list
 * @post the list has an additional value in it, at the end
 */
void CollectLinkedList::insertAtEnd(std::string playlistTitleIn, PlaylistLinkedQueue aPointerIn){
    CollectLinkedNode* newNode = new CollectLinkedNode(playlistTitleIn, aPointerIn);
    if(isEmpty()){
        this->front = newNode;
    }
    else{//--------------------------***reinterpret_cast<CollectLinkedNode *>
        CollectLinkedNode* tempNode= this->front;
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
std::string CollectLinkedList::getTitleValueAt(int index){

    CollectLinkedNode* node= front;
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
PlaylistLinkedQueue CollectLinkedList::getAddressValueAt(int index){

    CollectLinkedNode* node= front;
    if(index<0) {
        throw std::out_of_range("getAddressValueAt");
    }
    if(!isEmpty()) {
        for (int i = 0; i < index-1; i++) {
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
std::string CollectLinkedList::PrintAllTitle(){
    std::string result = "{";

    CollectLinkedNode* tempNode= front;
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
bool CollectLinkedList::isEmpty(){
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
int CollectLinkedList::itemCount(){
    return currCount;
}

/**
 * makes the list empty of valid items
 * @post the list is empty, such that isEmpty() == true
 */
void CollectLinkedList::clearList(){
    if(front!=nullptr){

        CollectLinkedNode* tempNode= front;
        CollectLinkedNode* nextNode=front->getNext();

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
int CollectLinkedList::find(std::string playlistTitleIn){
    int result = -1;

    CollectLinkedNode* tempNode = front;
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
 * removes the item at the front of the list, and returns a copy of that item
 * @post the item at the front is removed from the list, everything else is shifted down one
 * @return a copy of the item at index
 * @throws out_of_range exception if there is no item to remove
 */
std::string CollectLinkedList::removeValueAtFront(){
    if(itemCount()<1){
        throw std::out_of_range("removeValueAtFront");
    } else{
        std::string result = front->getPlaylistTitle();
        front=front->getNext();
        this->currCount-=1;
        return result;

    }
}

/**
 * removes the item at index from the list, and returns a copy of that item
 * @param index the location from which to get the value
 * @post the item at index is removed from the list, everything else is shifted down one
 * @return a copy of the item at index
 * @throws out_of_range exception if index is invalid
 */
std::string CollectLinkedList::removeValueAt(int index){
    CollectLinkedNode *tempNode = this->front;
    CollectLinkedNode *tempNodeBefore = this->front;
    if (index < 0 || index > currCount || isEmpty()) {
        throw std::out_of_range("Index Invalid");
    }
    if (index == 0) {
        return removeValueAtFront();
    } else {
        for (int i = 0; i < index; i++) {
            tempNodeBefore = tempNode;
            tempNode = tempNode->getNext();
        }
        std::string itemReturn = tempNode->getPlaylistTitle();
        tempNodeBefore->setNext(tempNode->getNext());
        this->currCount -= 1;
        return itemReturn;
    }
}