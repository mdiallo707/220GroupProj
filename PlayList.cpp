#include "LinkedPlaylist.h"



//
// Created by Mariama Diallo on 11/23/19.
//



LinkedPlaylist::LinkedPlaylist() {
    newNode=nullptr;
}

//Destructor
LinkedPlaylist::~LinkedPlaylist(){
    while(newNode!=nullptr){
        LinkedNode* current=newNode;
        newNode=newNode->getNext();
        delete current;
    }

}

/**
  * appends the new item to the end of the list
  * @post the list has an additional value in it, at the end
  */
void LinkedPlaylist::insertAtEnd(std::string songToAdd, std::string artistToAdd, double slToAdd){
    LinkedNode *current= new LinkedNode( songToAdd,  artistToAdd,  slToAdd);
    LinkedNode *item_Count=newNode;
    if(item_Count== nullptr){
        newNode=current;
    }
    else{
        while(item_Count->getNext()!=nullptr){
            item_Count=item_Count->getNext();
        }
        item_Count->setNext(current);
    }
}
/**
  * removes song item
  * @post the list has an additional value in it, at the end

void LinkedPlaylist::removeSong(std::string songToRemv){
    if(songToRemv || newNode==nullptr){
        throw std::out_of_range("index is invalid");
    }
    else{
        LinkedNode *current=newNode;
        int start=0;
        while(start!=index){
            current=current->getNext();
            start++;
        }
        int copyAtIndex=current->getItem();
        delete current;
        return copyAtIndex;
    }



}
 */
/**
    * checks if there are any valid items in the list
    * @return true if there are no valid items in the list, false otherwise
    */
bool LinkedPlaylist:: isEmpty(){
    if(newNode==nullptr){
        return true;
    }
    else{
        return false;
    }

}

/**
    * plays the next song info the list
    * @return the song info
    */
LinkedNode* LinkedPlaylist::playNext(){

return this->newNode->getNext();
}


/**
    * calculates the duration of a LinkedPlaylist
    * @return the duration
    */
double LinkedPlaylist::calcDuration(){
    LinkedNode* current= newNode->getNext();
    int duration=0;

    while(current!=0){
        duration += current->getDuration();
        current=current->getNext();
}

/**
    * displays all songs in aLinkedPlaylist
    * @return a string representation of all songs listed
    * double allSongsInLinkedPlaylist();
    */


}