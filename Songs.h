//
// Created by emurray2 on 11/28/2019.
//
#include <string>

#ifndef GITYPART_SONGS_H
#define GITYPART_SONGS_H


class Songs {
private:
    Songs(std::string artistN, std::string songN);

    std::string artistName;
    std::string songName;
    double duration;
    int playCount;

    Songs* next;
public:
    Songs(std::string artistName,std::string songTitle, double duration );
    Songs(const Songs& nodeToCopy); //only copies item, next is set to nullptr
    std::string getArtistName();
    std::string getSongName();
    int getPlayCount();
    double getDuration();


    Songs* getNext();
    void setArtistName(std::string artistName);
    void setSongName(std::string songName);
    void setPlayCount(int plays);
    void setNext(Songs* newNext);

    void incrementPlayCount();

    void setDuration(double durationAmount);
};


#endif //GITYPART_SONGS_H
