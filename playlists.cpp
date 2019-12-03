//
// Created by leianna chen on 2019/11/18.
//

#include "playlists.h"

playlists::playlists(){
    //number of song list
    int numList = 0;
    //list created date
    std::string Duration = " ";
    //name of the list
    std::string listName = " ";
    //Playlist
    LinkedQueue playlist = LinkedQueue();
    //playlist link
    string aList[3];
}
/**
 * create array under queue
 * include name, duration, and address
 */
std::string playlists::createArray(std::string Name, std::string Duration,char* aPlaylist){
    aList[0]=Name;
    aList[1]=Duration;
    aList[2]=aPlaylist;
    return "";
}
/**
 * create a queue
 * include array with name, duration, and address
 */
void playlists::createQueueList(std::string *item){
    playlist.enqueue(item);
}
/**
 * test if the QueueList is empty
 * return true if it's empty
 */
bool playlists::isQueueEmpty(){
    return playlist.isEmpty();
}

/**
 * count the time
 * @return new time
 */
std::string playlists::countDuration(){
    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
    return ctime(&timenow);
}
/**
 * order the list in alphbet order
 * @return new list
 */
//std::string playlists::orderListAlph(LinkedQueue playlist){
//    return "";
//}
/**
 * order the list in time created order
 * @return new list
 */
std::string playlists::orderListDate(){
    return "";
}
/**
 * Add a new list
 * @param listName
 */
void playlists::addNewList(std::string listName){

}
/**
 * remove a list if it's empty
 */
void playlists::removeList(std::string listName){

}
/**
 * remove a empty ArrayList
 */
void playlists::removeEmptyArray(){

}
/**
 * create a random list with random songs in other list
 * @param listName
 */
std::string playlists::RandomList(std::string listName){
    return "";
}