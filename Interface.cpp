//
// Created by emurray2 on 12/14/2019.
//
#include "Interface.h"
#include "PlaylistLinkedQueue.h"
#include "Inventory.h"
#include "CollectLinkedList.h"

//methods  made for playlist classes  gone (NTime)
Interface::Interface() {};
void Interface::help() {

    string answer;
    cout<<"Commands"<<endl;
    cout<<"Help:Provide a summary of all available commands "<<endl;
    cout<<"library:Display all songs in the library "<<endl;
    cout<<"artist <artist>: Display all songs for the given artist. "<<endl;
    cout<<"song<artist,title>:Display information about a particular song "<<endl;
    cout<<"import<filename> Add all songs from the given file to the library.Print a message to the user of any songs that already existed (do not add duplicates) "<<endl;
    cout<<"discontinue<filename>:Display information about a particular song "<<endl;
    cout<<"playlists: display the names of all playlists and their durations "<<endl;
    cout<<"playlist<name>: display all songs left in the given playlist, and the duration (time it will take to play the remaining songs)"<<endl;
    cout<<"new<name>: Make a new empty playlist with the given name"<<endl;
    cout<<"add<name,artist,title> Add the given song to the end of the given playlist"<<endl;
    cout<<"remove<name,artist,title> remove the given song from the playlist"<<endl;
    cout<<"playnext<name>:Print all information about the next song to be played from the given playlist to the screen. Remove that song from the given playlist. Add to the playcount for that song in the library. If the playlist is now empty, it should be removed."<<endl;
    cout<<"If you would like to to go back to the main menu to quit or call commands from there type quit"<<endl;// should it be exit? what is the main menu?
    cin>>answer;
    if(answer=="library"){
        user.currentSongs();
    }
    else if(answer=="artist<artists>"){
        cout<<"What is the name of the artist"<<endl;
        cin>>answer;
        user.particularArtist(answer);
    }
    else if(answer=="song<artist,title>"){
        cout<<"What is the name of the artist"<<endl;
        cin>>answer;
        string answer2;
        cout<<"What is the title of their song?";
        user.particularSong(answer,answer2);
    }
    else if(answer=="import<filename>"){
        cout<<"ListofSongs.txt has been imported"<<endl;
        userPlayList.WriteToFile("d","d","d");//inputs do not mater ListofSOngs.txt hardcoded
    }
    else if(answer=="discontinue<filename>"){
        cout<<"Currently not implemented"<<endl;
    }

    else if(answer=="playlists"){
        //display the names of all of the playlists that exist and their names;
       cout<<"PlayListLinkedQueue does not have a name property currently"<<endl;
    }
    else if(answer=="playlist<name>"){
        // the amount of songs in a particular playlists and the amount of time required for all the songs
        cout<<"Amount of time needed for playList: ";
        cout<<userPlayList.calcDuration();
    }
    else if(answer=="new<name>"){
        cout<<"Currently unable to create a new play"<<endl;
    }
    else if(answer=="add<name,artist,title>"){
        // addSong to the end of the playlist
        cout<<"What is the artist's name?";
        cin>>answer;
        cout<<"What is the title of the song?";
        string answer2;
        cin>>answer2;
        user.addSong(answer,answer2,5);
    }
    else if(answer=="remove<name,artist,title>"){
        // addSong to the end of the playlist
        cout<<"What is the artist's name?";
        cin>>answer;
        cout<<"What is the title of the song?";
        string answer2;
        cin>>answer2;
        user.removeSong(answer,answer2);
    }
    else if(answer=="playnext<name>"){
        userPlayList.playNext(); //dequeue next song info not implemented in song
    }
    else if(answer=="newrandom<name, duration>"){
        cout<<"PlayList currently does not have a method to populate it randomly"<<endl;
    }

    else if(answer=="quit"){
        cout<<"Hope to see you soon"<<endl;
        answer="quit";
    }

}

void Interface::main() {
    string answer;
    while(answer!="quit"){
        cout<<"What would you like to do?If you want to exit the program type quit. If you need help type help"<<endl;
        cin>>answer;
        cout<<""<<endl;
        if (answer=="help"){
            help();
        }
        if(answer=="library"){
           user.currentSongs();
           cout<<""<<endl;
        }
        else if(answer=="artist<artists>"){
            cout<<"What is the name of the artist"<<endl;
            cin>>answer;
            user.particularArtist(answer);
        }
        else if(answer=="song<artist,title>"){
            cout<<"What is the name of the artist"<<endl;
            cin>>answer;
            string answer2;
            cout<<"What is the title of their song?";
            user.particularSong(answer,answer2);
        }
        else if(answer=="import<filename>"){
            cout<<"ListofSongs.txt has been imported"<<endl;
            userPlayList.WriteToFile("d","d","10");//inputs do not mater ListofSOngs.txt hardcoded
        }
        else if(answer=="discontinue<filename>"){
            cout<<"Command has not been implemented"<<endl;
        }

        else if(answer=="playlists"){
            //display the names of all of the playlists that exist and their names;
            cout<<"PlayListLinkedQueue does not have a name property currently"<<endl;
        }
        else if(answer=="playlist<name>"){
            // the amount of songs in a particular playlists and the amount of time required for all the songs
            cout<<"Amount of time needed for playList ";
            userPlayList.calcDuration();
        }
        else if(answer=="new <name>"){
            cout<<"Currently unable to create a new play"<<endl;
        }
        else if(answer=="add<name,artist,title>"){
            // addSong to the end of the playlist
            cout<<"What is the artist's name?";
            cin>>answer;
            cout<<"What is the title of the song?";
            string answer2;
            cin>>answer2;
            userPlayList.addSongEnd("placeholder",answer,answer2);//playlist is only us PlayList name as a parameter without being assigned to property
        }
        else if(answer=="remove<name,artist,title>"){
            // addSong to the end of the playlist
            cout<<"What is the artist's name?";
            cin>>answer;
            cout<<"What is the title of the song?";
            string answer2;
            cin>>answer2;
            user.removeSong(answer,answer2);
        }
        else if(answer=="playnext<name>"){
            cout<<"Currently not working"<<endl;
            //userPlayList.playNext(); //dequeue next song info not implemented in song
        }
        else if(answer=="newrandom<name,duration>"){
            cout<<"PlayList currently does not have a method to populate it randomly"<<endl;
        }

        else if(answer=="quit"){
            cout<<"Hope to see you soon";
        }


    }


}