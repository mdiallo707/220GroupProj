//
// Created by leianna chen on 2019/11/18.
//

#include "CollPlaylists.h"

int CollPlaylists::countSize(){
    if(songList->isEmpty()){
        size=0;
    }
    else{
        size = 1;
        PlaylistLinkedQueue *copySongList = songList;
        while(copySongList->playNext()!=nullptr){
            copySongList->playNext();
            size = size + 1;
        }
    }
    return size;
}

/**
 * create array
 */
int* CollPlaylists::createArray(){
    countSize();//count the size of the linkNode
    int* array = new int[size];
    for (int i = 0; i<size;i++){
        array[i] = songList->playNext();
    }
}

/**
* count the duration in the playlist
* @return total duration
*/
std::string countDuration(){

}

/**
 * check if array is empty
 * @return ture if queue is empty
 */
bool CollPlaylists::isArrayEmpty(){
    if(size ==0){
        return true;
    }else{
        return false;
    }

}

/**
 * display playList name and duration
 */
void CollPlaylists::displayAll(){

}

/**
 * display selected playlist
 */
void CollPlaylists::displaySelect(std::string nameToFind){

}

/**
 * clear entire playlist
 */
void CollPlaylists::clearAll(){
    size = 0;
}

/**
 * add a playlist
 */
void CollPlaylists::addToFile(){

}

/**
 * remove a playlist
 */
void CollPlaylists::deleteFromFile(std::string PlaylistName){

}

/**
 * add a new play list
 * @param playList
 */
void CollPlaylists::addNewList(int *playList){

}

/**
 * create a random list with random songs in other list
 * @param listName
 */
void CollPlaylists::RandomList(std::string listName){

}