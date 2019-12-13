//
// Created by Mariama Diallo on 11/19/19.
//

#ifndef PERSONALGROUPPROJ_PLAYLIST_H
#define PERSONALGROUPPROJ_PLAYLIST_H


#include <stdexcept>
#include <string>
#include "SongsLinkedNode.h"


class PlayList{
private:
//Private to disable copying and assigning from outside class, don't implement these methods



public:
    PlayList(){}



    /**
  * appends the new item to the end of the list
  * @post the list has an additional value in it, at the end
  */
    virtual  void enqueue(std::string songToAdd, std::string artistToAdd, double slToAdd)=0;

/**
  * removes song item
  * @post the list has an additional value in it, at the end
  */
    virtual  std::string dequeue()=0;

/**
    * checks if there are any valid items in the list
    * @return true if there are no valid items in the list, false otherwise
    */
    virtual bool isEmpty()=0;

/**
    * plays the next song info the list
    * @return the song info
    */
    virtual SongsLinkedNode* playNext()=0;


/**
    * calculates the duration of a playlist
    * @return the duration
    */
    virtual double calcDuration()=0;

/**
    * displays all songs in aplaylist
    * @return a string representation of all songs listed
    *
    */

    virtual void allSongsInPlaylist(std::string namePL)=0;

    virtual void WriteToFile()=0;
    virtual void ReadFromFile()=0;

};

#endif //PERSONALGROUPPROJ_LINKEDPLAYLIST_H
