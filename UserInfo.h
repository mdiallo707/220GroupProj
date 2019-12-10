//
// Created by emurray2 on 12/8/2019.
//

#ifndef GITYPART_USERINFO_H
#define GITYPART_USERINFO_H


#include <string>

class UserInfo {
private:

    std::string userName;
    std::string firstName;
    std:: string lastName;
public:
    UserInfo(std::string userName, std::string firstName, std::string lastName);



    // a file should be created for the user if they are ne
    std::string getUserName();
    std::string getFirstName();
    std::string getLasName();
};


#endif //GITYPART_USERINFO_H
