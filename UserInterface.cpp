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
    if(answer=="1"||answer=="create"){
        CollectLinkedList userCollection;
    }



};
void UserInterface::playListInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    string  answer;
    cout<<"A playlist has already been created for you what would you like to do now"<<endl;
    cout<<"Select 1. If you would like to add to a playlist"<<endl;
    cout<<"Select 2. If you would like to delete a playlist"<<endl;
    cout<<"Select 3. If you would like to delete all playlist"<<endl;
    cin>> answer;
    if(answer=="1"){
        string artistName;
        string songTitle;
        double duration;
    cout<<"What is the name of the song you would like to add" ;
    cin>> songTitle;
    cout<<"Who is the song artist";
    cin>>artistName;
    cout<<"What is the duration of the song";
    cin>>duration;
    cout<<"The song"+ songTitle+" by "+ artistName+" has been added"<<endl;

    }



    }



void UserInterface::inventoryInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    cout<<"Select 1. If you would like to add a song to inventory"<<endl;
    cout<<"Select 2. If you would like to delete a song from inventory"<<endl;
    cout<<"Select 3. If you would like to delete all songs from inventory"<<endl;
    cout<<"Select 4. If you would like see all the songs from a particular artist"<<endl;
    cout<<"Select 5. If you would like to see all the songs from inventory"<<endl;
    cout<<"Select 6. If you would like to go back to main"<<endl;
    cout<<"Select 7 or type help. If you need help  typ"<<endl;





};
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
    cout<<"new <name>: Make a new empty playlist with the given name"<<endl;
    cout<<"add <name, artist, title> Add the given song to the end of the given playlist"<<endl;
    cout<<"playnext <name>:Print all information about the next song to be played from the given playlist to the screen. Remove that song from the given playlist. Add to the playcount for that song in the library. If the playlist is now empty, it should be removed."<<endl;
   cin>>answer;

    if (answer=="help"){
        commandsDJ();
        cout<<"Would you like to go to the main menu?";
        cin>>answer;
        if(answer=="yes"){
            main();
        } else{ commandsDJ();}
    }
    else if (answer=="library"||"Library"){
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
    else if (answer=="artist <artist>"){
        string answer2;
        //will print a list of of strings of whats in inventory
        cout<<"What are artist's songs do you want to see?";
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
        while(answer=="1"||answer=="inventory"||answer=="2"||answer=="playlist"||answer=="3"|| answer=="collection"||answer=="4"||answer=="help") {
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
