//
// Created by emurray2 on 12/8/2019.
//
#include <string>

#include "UserInfo.h"
UserInfo::UserInfo(std::string userName, std:: string firstName, std::string lastName) {
this->userName=userName;
this->firstName=firstName;
this->lastName=lastName;

// a file should be created for the user if they are new
}
std::string UserInfo::getUserName(){
    return userName;
}
std::string UserInfo::getFirstName(){
    this->firstName;
}
std::string UserInfo::getLasName(){
    this->lastName;
}