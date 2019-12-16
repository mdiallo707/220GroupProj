//
// Created by emurray2 on 12/15/2019.
//

#ifndef INC_220_32_IO_PLAYLIST2_H
#define INC_220_32_IO_PLAYLIST2_H


#include "Songs.h"


class PlayList2 {

private:

    Songs* front;
    Songs* end;
    std::string playListName;
    double duration;



public:

    //Creates an empty playlist queue
    PlayList2(std::string playListName);


    //adds a song to the end of the playlist queue
    void enqueue(std::string songToAdd, std::string artistToAdd, double slToAdd);

    //takes an item off the front of the playlist queue and returns it
    //throws out_of_range exception if the queue is empty

    std::string  removeSong(std::string plName, std::string artistName, std::string songTitle);

    std::string dequeue();
    Songs* returnBegin();

    //returns true if the playlist queue has no songs, false otherwise
    bool isEmpty();

    /**
     * plays the next song info in the playlist list
     * @return the song info
     */


    void playNextSong(std::string plName);
    Songs* playNext();


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


/**
    * Reads songs from file
    * @post prints the songs currently in the song text file
    */

    /**
    * Write new user inputs to song file
    * @post the file has an additional value in it, at the end
    */
    void WriteToFile(std::string songToAdd, std::string artistToAdd, std::string slToAdd);


    void allSongsInPlaylist2();

    std::string getPlayListName();

    void ReadFromFile(std::string playListName);

    void addSongUser(std::string playListName, std::string artistName, std::string songTitle);
};



#endif //INC_220_32_IO_PLAYLIST2_H
