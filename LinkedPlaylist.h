//
// Created by Mariama Diallo on 11/28/19.
//

#ifndef PERSONALGROUPPROJ_LINKEDPLAYLIST_H
#define PERSONALGROUPPROJ_LINKEDPLAYLIST_H



#include "LinkedNode.h"
#include "PlayList.h"



class LinkedPlaylist : public PlayList{

private:

    LinkedNode *newNode;

public:
    LinkedPlaylist();
    //Destructor
    ~LinkedPlaylist();


/**
  * appends the new item to the end of the list
  * @post the list has an additional value in it, at the end
  */
    void insertAtEnd(std::string songToAdd, std::string artistToAdd, double slToAdd);

/**
  * removes song item
  * @post the list has an additional value in it, at the end
  */
    void removeSong(std::string songToRemv);

/**
    * checks if there are any valid items in the list
    * @return true if there are no valid items in the list, false otherwise
    */
    bool isEmpty();

/**
    * plays the next song info the list
    * @return the song info
    */
    LinkedNode* playNext();


/**
    * calculates the duration of a playlist
    * @return the duration
    */
    double calcDuration();

/**
    * displays all songs in aplaylist
    * @return a string representation of all songs listed
    *  double allSongsInPlaylist();
    */



};

#endif //PERSONALGROUPPROJ_LINKEDPLAYLIST_H
