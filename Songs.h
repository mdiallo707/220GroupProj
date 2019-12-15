//
// Created by emurray2 on 12/10/2019.
//

#ifndef GITYPART_SONGS_H
#define GITYPART_SONGS_H
#include <string>


class Songs {
private:
    std::string songName;
    std::string artistName;
    double duration;

public:
    Songs*next;

    Songs(std::string artistName, std::string songName, double duration);
    std::string getSongName();
    std::string getArtistName();
    int getPlayCount();
    double getDuration();
    int playCounter;


    Songs* getNext();
    void setArtistName(std::string artistName);
    void setSongName(std::string songName);
    void setPlayCount(int plays);
    Songs * setNext(Songs* newNext);

    void incrementPlayCount();

    void setDuration(double durationAmount);

    void playNextSong(std::string plName);
};


#endif //GITYPART_SONGS_H
