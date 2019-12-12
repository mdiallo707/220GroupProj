#include "playlists.h"
#include <iostream>
//-------usingtime--------
#include <chrono>
#include <ctime>
using namespace std;

//-------------------------------------------------------------
// Created by leianna chen on 2019/12/3.
//-------------------------------------------------------------
int testCountDuration(){

}
int main(){
    //------------test time-------------
//    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
//    cout << ctime(&timenow) << endl;



    //------------test isQueueEmpty-------------
//    playlists testlist;
//    bool result=testlist.isQueueEmpty();
//    //boolalpha means to print true/false instead of 1/0
//    cout<< boolalpha << result << endl;

    //------------test createArray-------------
    playlists testlist;
    char *aNum = "123456";
    testlist.createArray("12","123", aNum);
    std::string num = testlist.aList[2];
    cout<< num << endl;
    return 0;
}

