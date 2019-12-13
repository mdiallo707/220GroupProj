#include "UserInterface.h"
//
// Created by emurray2 on 12/8/2019.
//

#include <iostream>
#include <sstream>

#include "UserInterface.h"
#include <string>
#include "UserInfo.h"
#include <iomanip>
using namespace std;


// creat file for the new user
// there should be a bool that is case sensitive that checks wether or not a given userName is avalible

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
cout<<"Your user name is "+userName+" Your first and last name is "+firstName+"  "+lastName<<endl;
return newUser;
}
void UserInterface:: test(){
    cout<<"Check";
}
void UserInterface::collectionInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    cout<<"Select 1. If you would like to create a collection"<<endl;
    cout<<"Select 2. If you would like to add to a collection"<<endl;
    cout<<"Select 3. If you would like to delete a collection"<<endl;
    cout<<"Select 4. If you would like to delete all collections"<<endl;



};
void UserInterface::playListInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    cout<<"Select 1. If you would like to create a playlist"<<endl;
    cout<<"Select 2. If you would like to add to a playlist"<<endl;
    cout<<"Select 3. If you would like to delete a playlist"<<endl;
    cout<<"Select 4. If you would like to delete all playlist"<<endl;

};
void UserInterface::inventoryInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file
    cout<<"Select 1. If you would like to add a song to inventory"<<endl;
    cout<<"Select 2. If you would like to delete a song from inventory"<<endl;
    cout<<"Select 3. If you would like to delete all songs from inventory"<<endl;
    cout<<"Select 4. If you would like see all the songs from a particular artist"<<endl;
    cout<<"Select 5. If you would like to see all the songs from inventory"<<endl;
    cout<<"Select 6. If you would like to go back to main"<<endl;
    cout<<"If you need help "<<endl;





};
void UserInterface:: commandsDJ(){
    cout<<"Commands"<<endl;
    cout<<"Help:Provide a summary of all available commands "<<endl;
    cout<<"Library:Display all songs in Inventory "<<endl;
    cout<<"artist <artist>: Display all songs for the given artist. "<<endl;
    cout<<":Display all songs in Inventory "<<endl;



}
void UserInterface:: help(){
    //will be a class that has all the possible
    // commands a user could choose there should be general help stuff and things
    //specfically about
    int answer;
    cout<<"This is the help menu.It will inform you about general options you have"<<endl;
    cout<<"1.How you can create a playlist"<<endl;
    cout<<"2.How to creat a collection of playlists"<<endl;
    cout<<"3.How to make changes to the song inventory "<<endl;
    cout<<" Please enter a number associated with the respective options "<<endl;
    cin>>answer;
    if (answer==1){
        // call the playlist help class that should explain the commands for the playlist class
        //Should allow the user to be able to create a playlist when they are done with getting help and
        // Give the option to return to the help menu or allow them to return to the main menu
        // User should be able to select main when finished reading the information in the help class
        // or start creating playlist
    }
  else  if (answer==2){
         // call the collection help class that should explain the commands for the collection class
        //Should allow the user to be able to create a collection when they are done with getting help and
        // return them back to the main menu when they are done.
        // User should be able to go to main menu or start working on collections
    }
   else if(answer==3){

    }
    while(answer!=1&answer!=2&answer!=3){
        cout<<"You have an entered an invalid number"<<endl;
        cout<<"This is the help menu.It will inform you about general options you have"<<endl;
        cout<<"1.How you can create a playlist"<<endl;
        cout<<"2.How to creat a collection of playlists"<<endl;
        cout<<"3.How to make changes to the song inventory "<<endl;
        cout<<" Please enter a number associated with the respective options "<<endl;
        cin>>answer;}
    if (answer==1){
        // call the playlist help class that should explain the commands for the playlist class
        //Should allow the user to be able to create a playlist when they are done with getting help and
        // Give the option to return to the help menu or allow them to return to the main menu
        // User should be able to select main when finished reading the information in the help class
        // or start creating playlist
    }
    else  if (answer==2){
        // call the collection help class that should explain the commands for the collection class
        //Should allow the user to be able to create a collection when they are done with getting help and
        // return them back to the main menu when they are done.
        // User should be able to go to main menu or start working on collections
    }
    else if(answer==3){
    // call the collection help class that should explain the commands for the collection class
    //Should allow the user to be able to create a collection when they are done with getting help and
    // return them back to the main menu when they are done.
    // User should be able to go to main menu or start working on collections
    }

}








std::string UserInterface::exitInterface() {
    if(exit==true){
        // when changes are being made they should automatically be saved so you do not have to check if things were saved or not.
       // It is important that everyone has save() add()  delete() for their section
        cout<<"Thank you for using DJ scenario. Goodbye";
    }


}

void UserInterface::setExitInterface() {
    exit=true;
}
void UserInterface::main() {
    string answer;
    cout<< "Hi "+firstName+" What would you like to do today";
    cout<<"If you would like to make changes or get information about the songs in your inventory press 1."<<endl;
    cout<<"If you would like to create a new playlist or make changes to your current playlist press 2"<<endl;
    cout<<"If you would like create a new collection or update your current collection press 3"<<endl;
    cout<<"If you would like help on how to use these options press 4 or type help"<<endl;
    if (answer=="1"||answer=="inventory"){

    }
    else if (answer=="2"||answer=="playlist"){

    }
    else if(answer=="3"|| answer=="answer"){

    }
    else if(answer=="4"||answer=="help"){

    }
    while(answer=="1"||answer=="inventory"||answer=="2"||answer=="playlist"||answer=="3"|| answer=="answer"||answer=="4"||answer=="help") {
            cout<<"You have an entered an invalid number"<<endl;
            cout<<"If you would like to add songs to your inventory press 1."<<endl;
            cout<<"If you would like to create a new playlist or add songs to your current playlist press 2"<<endl;
            cout<<"If you would like create a new collection or update your current collect press 3"<<endl;
            cout<<"If you would like help on how to use these options press 4"<<endl;
            if (answer=="1"||answer=="inventory"){

            }
            else if (answer=="2"||answer=="playlist"){

            }
            else if(answer=="3"|| answer=="answer"){

            }
            else if(answer=="4"||answer=="help"){

            }


        }
    }


void UserInterface::Interface()  {
    // Keep answers as the only variable for cin
    // Allows for acess to different branches
    string answer;
    cout<<"Let's create an account"<<endl;
    UserInfo newUser=createAccount();
    main();



    }
