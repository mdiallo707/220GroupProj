#include "PlayList.h"
//
// Created by Mariama Diallo on 11/23/19.
//

#include <iostream>

/**
    * Constructor
    */
Song::Song(const std::string& title, const std::string& artist, double songLength){

    this->title=title;
    this->artist=artist;
    this->songLength=songLength;

}




/**
* sets song title
*/
void Song::setSongTitle(const std::string& titleItem){
    title=titleItem;

}

/**
 * sets artist name
 */
void Song:: setArtistName(const std::string& artistItem){
    artist=artistItem;

}

/**
 * sets song length
 */
void Song::setSongLength(double lengthItem){
    songLength=lengthItem;

}

/**
 * gets song name
 */
std::string Song::getSongName(){
    return title;

}

/**
 * gets artist name
 */
std::string Song::getArtistName(){
    return artist;

}

/**
* gets the song length
*/

double Song::getSongLength(){
    return songLength;

}





