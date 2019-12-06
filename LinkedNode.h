//
// Created by Toby Dragon on 10/24/16.
//

#ifndef LINKEDNODE_H
#define LINKEDNODE_H
#include <string>


class LinkedNode {

private:
    double songLength;
    std::string title;
    std::string artist;
    LinkedNode* next;

public:
    LinkedNode( std::string title,std::string artist,double songLength);
    LinkedNode(const LinkedNode& nodeToCopy); //only copies item, next is set to nullptr
    std::string getTitle();
    std::string getArtist();
    double getDuration();
    LinkedNode* getNext();
    void setSongTitle(std::string newTitle);
    void setArtistName(std::string newArtist);
    void setSongLength(double newSongLength);
    void setNext(LinkedNode* newNext);
};


#endif //LINKEDNODE_H
