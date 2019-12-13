#include "UserInterface.h"
//
// Created by emurray2 on 12/8/2019.
//

#include <iostream>
#include "UserInterface.h"
#include <string>
#include "UserInfo.h"
#include "PlaylistLinkedQueue.h"


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
void collectionInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file- (Lei)
};
void playListInterface(){
    PlaylistLinkedQueue newList;
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file-

};
void inventoryInterface(){
    //should have its own help class and the ability for the user to do all the methods
    // that were listed in the Userinteraction.H file- (Me)
};

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
    int answer;
    cout<< "Hi "+firstName+" What would you like to do today";
    cout<<"If you would like to makes change or get information about the songs in your inventory press 1."<<endl;
    cout<<"If you would like to create a new playlist or make changes to your current playlist press 2"<<endl;
    cout<<"If you would like create a new collection or update your current collect press 3"<<endl;
    cout<<"If you would like help on how to use these options press 4"<<endl;
    if (answer==1){

    }
    else if (answer==2){

    }
    else if(answer==3){

    }
    else if(answer==4){

    }
    while(answer!=1||answer!=2||answer!=3||answer!=4) {
            cout<<"You have an entered an invalid number"<<endl;
            cout<<"If you would like to add songs to your inventory press 1."<<endl;
            cout<<"If you would like to create a new playlist or add songs to your current playlist press 2"<<endl;
            cout<<"If you would like create a new collection or update your current collect press 3"<<endl;
            cout<<"If you would like help on how to use these options press 4"<<endl;
            if (answer==1){

            }
            else if (answer==2){

            }
            else if(answer==3){

            }
            else if(answer==4){

            }


        }
    }


void UserInterface::Interface()  {
    // Keep answers as the only variable for cin
    // Allows for acess to different branches
    int answer;
    cout<<"Do you have an account?If not please select 1."<<endl;
   cout<< "If you have an account please select 2"<<endl;
   cout<<"If you would like please select 3"<<endl;
    cin>> answer;
    if (answer==1){
        cout<<"Let's make an account"<<endl;
        UserInfo newUser=createAccount();}
    if(answer==2){
        // you should go to main menu know
        main();
    }
    if(answer==3){
        help();
    }
    while(answer!=1&answer!=2&answer!=3){
        cout<<"You have an entered an invalid number"<<endl;
        cout<<"Do you have an account?If not please select 1"<<endl;
        cout<<"If you have an account please select 2"<<endl;
        cout<<"If you would like help please select 3"<<endl;
        cin>>answer;}
        if (answer==1){
            cout<<"Let's make an account"<<endl;
            UserInfo newUser=createAccount();}
        if(answer==2){
            // you should go to main menu know
        }
        if(answer==3){
            help();
        }

    }
