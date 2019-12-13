//
//  Created by Mariama Diallo on 12/8/19.
//

#ifndef STACKSANDQUEUES_QUEUE_H
#define STACKSANDQUEUES_QUEUE_H

#include <string>
#include <stdexcept>
#include "SongsLinkedNode.h"
#include "PlayList.h"


/**
 * Represents a FIFO data structure (First In First Out). Picture a line
 * to wait for something (first person in is the first person out)
 */
class PlaylistLinkedQueue: public PlayList {
private:
    SongsLinkedNode* front;
    SongsLinkedNode* end;
    
public:

    
    //Creates an empty queue
    PlaylistLinkedQueue();


    //adds an item to the end of the queue
    void enqueue(std::string songToAdd, std::string artistToAdd, double slToAdd);

    //takes an item off the front of the queue and returns it
    //throws out_of_range exception if the queue is empty
    std::string dequeue();

    //returns true if the queue has no items, false otherwise
    bool isEmpty();

    /**
     * plays the next song info the list
     * @return the song info
     */
    SongsLinkedNode* playNext();


/**
    * calculates the duration of a playlist
    * @return the duration
    */
    double calcDuration();

/**
    * displays all songs in a playlist
    * @return a string representation of all songs listed
    */

   void allSongsInPlaylist(std::string namePL);

    void WriteToFile();

    void ReadFromFile();


};

#endif //STACKSANDQUEUES_QUEUE_H
