//
// Created by emurray2 on 11/19/2019.
//

#ifndef INC_220GROUPPROJ_USERINFO_H
#define INC_220GROUPPROJ_USERINFO_H

#include<string>
#include <w32api/rpcndr.h>

class UserInfo {
    private:
    std::string userName;
    int  userAge;
public:
    UserInfo(std::string userName, int userAge);
    void createFile();
    boolean checkIfUserHaseFile ();
    std::string showFilesAvalible(); //
    // you have to store all the files in one place and be able to have all the names




};




#endif //INC_220GROUPPROJ_USERINFO_H
