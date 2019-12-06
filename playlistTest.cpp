#include <iostream>
#include "LinkedPlaylist.h"
#include "TestLib.h"
#include "PlayList.h"



void insertSongTest( ) {
    {
        std::string title;
        do {
            int i = 1;
            std::cout << "\nplease insert new song into playlist"
                         " - leave title empty to end insertion."
                         "\nEnter the title of song# " << i << ": ";
            std::getline(std::cin, title);
            if (title.empty()) { break; }

            std::cout << "Please enter artist for this song: ";
            std::string artist;
            std::getline(std::cin, artist);


            std::cout << "Enter the duration(in mins) for this song: ";
            double songLength = 0.0;
            std::cin >> songLength;
            std::cin.ignore(1);

            std::cout << "\nAdding " << " song \"" << title
                      << "\" by " << artist << ". Running time: "
                      << songLength << " mins \n";
            i++;
            LinkedNode( title,artist, songLength);
            LinkedPlaylist* playlist;
            playlist->insertAtEnd(title, artist, songLength);

        }
        while (not title.empty());

    }

}


int main() {
    insertSongTest( );

}