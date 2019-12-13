#include "UserInterface.h"
//
// Created by emurray2 on 12/8/2019.
//

#include <iostream>
#include <sstream>
#include "Inventory.h"

#include "CollectLinkedList.h"
#include "PlaylistLinkedQueue.h"
#include "UserInterface.h"
#include <string>
#include "UserInfo.h"
#include <iomanip>
#include "Inventory.h"


using namespace std;


// creat file for the new user
// there should be a bool that is case sensitive that checks wether or not a given userName is avalible
UserInterface::UserInterface() {};
UserInfo UserInterface:: createAccount(){
    // A file should be created once all information is gathered
 std::string userName;
 std::string firstName;
 std::string lastName;
 cout<<"What is your first name?"<<endl;
 cin>>firstName;
 cout<<"What is your last name"<<endl;
 cin>> lastName;
 // come back later to create a check if a name is already in use.
 cout<<"What would you like your user name to be"<<endl;
 cin>>userName;
 // there should be a bool that is case sensitive that checks wether or not a given userName is avalible
 this->userName=userName;
 this->firstName=firstName;
 this->lastName=lastName;
 UserInfo newUser(userName,firstName,lastName);
cout<<"Your user name is "+userName+" Thank you first "+firstName+ "for making an account"<<endl;
return newUser;
}
void UserInterface:: test(){
    cout<<"Check";
}
void UserInterface::collectionInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    string answer;
    cout<<"When you created an account a collection was created for you"<<endl;
    cout<<"Select 1. If you would like to add to a collection"<<endl;
    cout<<"Select 2. If you would like to delete a collection"<<endl;
    cout<<"Select 3. If you would like to delete all collections"<<endl;
    cin>> answer;
    if(answer=="1"||answer=="add"){
        CollectLinkedList userCollection;
    }



};
void UserInterface::playListInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    string  answer;
    cout<<"A playlist has already been created for you what would you like to do now"<<endl;
    cout<<"Select 1. If you would like to add to a playlist"<<endl;
    //cout<<"Select 2. If you would like to delete a playlist"<<endl;
   // cout<<"Select 3. If you would like to delete all playlist"<<endl;
    cin>> answer;
    if(answer=="1") {
        string artistName;
        string songTitle;
        double duration;
        cout << "What is the name of the song you would like to add";
        cin >> songTitle;
        cout << "Who is the song artist";
        cin >> artistName;
        cout << "What is the duration of the song";
        cin >> duration;
        userPlaylist.enqueue(songTitle, artistName, duration);
        cout << "The song" + songTitle + " by " + artistName + " has been added" << endl;
        cout << "If you would like to go back to main :type main" << endl;
        cout << "If you would like to continue work on playlist: type playlists" << endl;
        cin >> answer;
        if (answer == "main") {
            main();
        } else if (answer == "playlists") {
            playListInterface();
        } else if (answer != "playlists" & answer != "main") {
            cout << "Please enter a valid answer" << endl;
            playListInterface();
        }
//    if(answer=="2"){
//        string artistName;
//        string songTitle;
//        double duration;
//        cout<<"What is the name of the song you would like to add" ;
//        cin>> songTitle;
//        cout<<"Who is the song artist";
//        cin>>artistName;
//        cout<<"What is the duration of the song";
//        cin>>duration;
//        userPlaylist.enqueue(songTitle,artistName,duration);
//        cout<<"The song"+ songTitle+" by "+ artistName+" has been added"<<endl;
//        cout<<"If you would like to go back to main :type main"<<endl;
//        cout<<"If you would like to continue work on playlist: type playlists"<<endl;
//        cin>>answer;
//        if(answer=="main"){
//            main();
//        }
//        else if(answer=="paylists"){
//            playListInterface();
//        }
//        else if(answer!="playlists"&answer!="main")
//            cout<<"Please enter a valid answer"<<endl;
//        playListInterface();
//    }


    }  }







void UserInterface::inventoryInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    cout<<"Select 1. If you would like to add a song to inventory"<<endl;
   // cout<<"Select 2. If you would like to delete a song from inventory"<<endl;
    cout<<"Select 2. If you would like to delete all songs from inventory"<<endl;
    cout<<"Select 3. If you would like see all the songs from a particular artist"<<endl;
    cout<<"Select 4. If you would like to see all the songs in the inventory"<<endl;
    cout<<"Select 5. If you would like to go back to main"<<endl;
    cout<<"Select 6 or type help. If you need help  "<<endl;
    cout<<"If you like to quit type quit";
    string answer;
    cin>>answer;
    if(answer=="1"){
        string artistName;
        string songTitle;
        double duration;
        cout<<"What is the name of the song you would like to add?"<<endl ;
        cin>> songTitle;
        cout<<"Who is the artist of the song?"<<endl;
        cin>>artistName;
        cout<<"What is the duration of the song"<<endl;
        cin>>duration;
        userInventory.addSong(artistName,songTitle,duration);
        cout<<"The song"+ songTitle+" by "+ artistName+" has been added"<<endl;
        cout<<"If you would like to go back to main :type main"<<endl;
        cout<<"If you would like to continue making changes to inventory type inventory"<<endl;
        cin>>answer;
        if(answer=="main"){
            main();
        }
        else if(answer=="inventory"){
            inventoryInterface();
        }
        else if(answer!="inventory"&answer!="main"){
            cout<<"Please enter a valid answer"<<endl;
        inventoryInterface();}
    }
    if(answer=="2"){
        userInventory.clearLibrary();
        cout<<"The library has been cleared"<<endl;
        cout<<"If you would like to go back to main :type main"<<endl;
        cout<<"If you would like to continue making changes to inventory type inventory"<<endl;
        cin>>answer;
        if(answer=="main"){
            main();
        }
        else if(answer=="inventory"){
            inventoryInterface();
        }
        else if(answer!="inventory"&answer!="main"){
            cout<<"Please enter a valid answer"<<endl;
            inventoryInterface();}
    }
    if(answer=="3"){
        string artistName;

        cout<<"What is the name of the artist you would like to see all songs for them?"<<endl ;
        cout<<"Here is the inventory for "+ artistName<<endl;
        userInventory.particularArtist(artistName);
        cout<<"If you would like to go back to main :type main"<<endl;
        cout<<"If you would like to continue making changes to inventory type inventory"<<endl;
        cin>>answer;
        if(answer=="main"){
            main();
        }
        else if(answer=="inventory"){
            inventoryInterface();
        }
        else if(answer!="inventory"&answer!="main"){
            cout<<"Please enter a valid answer"<<endl;
            inventoryInterface();}
    }
    if(answer=="4"){
        string artistName;

        cout<<"Here all the songs currently in your inventory";
        //prints all songs
        userInventory.check();
        cout<<"If you would like to go back to main :type main"<<endl;
        cout<<"If you would like to continue making changes to inventory type inventory"<<endl;
        cin>>answer;
        if(answer=="main"){
            main();
        }
        else if(answer=="inventory"){
            inventoryInterface();
        }
        else if(answer!="inventory"&answer!="main"){
            cout<<"Please enter a valid answer"<<endl;
            inventoryInterface();}
    }
    if(answer=="5"||answer=="main"){
        string artistName;
        cout<<"Going to main"<<endl ;
        main();
    }





}






void UserInterface:: commandsDJ(){
    string answer;
    cout<<"Commands"<<endl;
    cout<<"Help:Provide a summary of all available commands "<<endl;
    cout<<"Library:Display all songs in Inventory "<<endl;
    cout<<"artist <artist>: Display all songs for the given artist. "<<endl;
    cout<<"Song<artist,title>:Display information about a particular song "<<endl;
  //  cout<<"import<filename> Add all songs from the given file to the library.Print a message to the user of any songs that already existed (do not add duplicates) "<<endl;
  //  cout<<"discontinue <filename>:Display information about a particular song "<<endl;
    cout<<"playlists: display the names of all playlists and their durations "<<endl;
    cout<<"playlist <name>: display all songs left in the given playlist, and the duration (time it will take to play the remaining songs)"<<endl;
    //cout<<"new <name>: Make a new empty playlist with the given name"<<endl;
    cout<<"add <name, artist, title> Add the given song to the end of the given playlist"<<endl;
    cout<<"playnext <name>:Print all information about the next song to be played from the given playlist to the screen. Remove that song from the given playlist. Add to the playcount for that song in the library. If the playlist is now empty, it should be removed."<<endl;
   cout<<"If you would like to quit type quit";
    cin>>answer;

    if (answer=="help"){
        commandsDJ();
        cout<<"Would you like to go to the main menu?";
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}
    }
    else if (answer=="library"){
        //will print a list of of strings of whats in inventory
        userInventory.check();}
    else if (answer=="artist <artist>"){
        //will print a list of of strings of whats in inventory
        cout<<"What are artist's song do you want to see?";
        cin>>answer;
        userInventory.particularArtist(answer);
        cout<<"Would you like to go to the main menu?";
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}}

    else if (answer=="Song<artist,title>"){
        string answer2;
        //will print a list of of strings of whats in inventory
        cout<<"What are artist's songs do you want to see?";
        cin>>answer;
        cout<<"What is the title of the song?";
        cin>>answer2;
        userInventory.particularAS(answer,answer2);
        cout<<"Would you like to go to the main menu?";
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}}
    else if (answer=="playlist"){
        cout<<"The duration of the playlist is ";
        cout<<userPlaylist.calcDuration()<<endl;
        cout<<userName+"'s"+"playlist"<<endl;
        cout<<"Would you like to go to the main menu?"<<endl;
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}}
    else if (answer=="playlist <name>"){
        cout<<"The songs left in your playlist are ";
        userPlaylist.allSongsInPlaylist2();
        cout<<"Would you like to go to the main menu?"<<endl;
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}}
    else if (answer=="add <artist, title>"){
        string answer2;
        int answer3;
        cout<<"Who is the artist for the song you are trying to add? ";
        cin>>answer;
        cout<<"What is the name of the song ";
        cin>>answer2;
        cout<<"What is the duration of the song?";
        userPlaylist.enqueue(answer2,answer,answer3);
        cout<<"Would you like to go to the main menu?"<<endl;
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}}
    else if (answer=="playnext <name>"){
        userPlaylist.playNextInfo();
        cout<<"Would you like to go to the main menu?"<<endl;
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}}
    else if(answer=="quit"){
        cout<<"Bye see you soon!";
    }
    else if(answer!="help"&answer!="playnext <name>"&answer!="add <artist, title>"&answer!="playlist <name>"&answer!="playlist"&answer!="Song<artist,title>"&answer!="artist <artist>"&answer!="library"&answer!="Library"){
        cout<<"Enter a valid answer"<<endl;
        commandsDJ();
    }

    }

    void UserInterface::main() {
        if(firstName==""){firstName="their";}
        string answer;
        cout<< "Hi "+firstName+",what would you like to do today";
        cout<<"If you would like to make changes or get information about the songs in your inventory press 1 or type inventory."<<endl;
        cout<<"If you would like to create a new playlist or make changes to your current playlist press 2"<<endl;
        cout<<"If you would like create a new collection or update your current collection press 3"<<endl;
        cout<<"If you would like help on how to use these options press 4 or type help"<<endl;
        cout<<"If you would like to exit the program type quit";
        cin>>answer;
        if (answer=="1"||answer=="inventory"){
            inventoryInterface();
        }
        else if (answer=="2"||answer=="playlist"){
            playListInterface();

        }
        else if(answer=="3"|| answer=="collection"){
            collectionInterface();

        }
        else if(answer=="4"||answer=="help"){
            commandsDJ();

        }
        else if (answer=="quit"||"Quit"){
            cout<<"Thank you for stopping by comeback soon";
        }
        while(answer!="1"&answer!="inventory"&answer!="2"&answer!="playlist"&answer!="3"&answer!="collection"&answer!="4"&answer!="help") {
            cout<<"You have an entered an invalid number"<<endl;
            cout<<"If you would like to add songs to your inventory press 1."<<endl;
            cout<<"If you would like to create a new playlist or add songs to your current playlist press 2"<<endl;
            cout<<"If you would like create a new collection or update your current collect press 3"<<endl;
            cout<<"If you would like help on how to use these options press 4"<<endl;
            cout<<"If you would like to exit the program type quit";

            if (answer=="1"||answer=="inventory"){
                inventoryInterface();

            }
            else if (answer=="2"||answer=="playlist"){
                playListInterface();

            }
            else if(answer=="3"|| answer=="collection"){
                collectionInterface();

            }
            else if(answer=="4"||answer=="help"){
                commandsDJ();

            }


        }
    }


    void UserInterface::Interface()  {
        // Keep answers as the only variable for cin
        // Allows for acess to different branches
        string answer;
        cout<<"Let's create an account"<<endl;
        // UserInfo newUser=createAccount();
        main();



    }
