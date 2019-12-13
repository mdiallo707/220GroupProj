
#include <iostream>
#include "CollectPlaylists.h"
#include "TestLib.h"
#include "PlaylistLinkedQueue.h"
#include "CollectPlaylists.h"
#include "Inventory.h"
using namespace std;

void testRandomPlaylist(std::string playlistTitleIn, double Duration){
    //two songList
    std::string weekendVibe;
    PlaylistLinkedQueue playList1 = PlaylistLinkedQueue();
    playList1.enqueue("AAAAA1", "Abra", 5.41);
    playList1.enqueue("AAAAA2", "Abra2", 5.11);
    playList1.enqueue("AAAAA3", "Abra3", 7.41);
    PlaylistLinkedQueue playList2 = PlaylistLinkedQueue();
    playList2.enqueue("BBBBB1", "Abra", 5.00);
    playList2.enqueue("BBBBB2", "Abra2", 4.24);
    playList2.enqueue("BBBBB3", "Abra3", 6.41);

    //Create a collection of song lists
    CollectLinkedList songCollection;
    songCollection.insertAtEnd("songA",playList1.front);
    songCollection.insertAtEnd("songB",playList2.front);

    int address1 = songCollection.find("songA");
    int address2 = songCollection.find("songB");
    std::cout << "Test get value at and find a playlist: " << std::endl;
    std::cout << songCollection.getValueAt(address1) << std::endl;
    std::cout << songCollection.getValueAt(address2) << std::endl;

    //count songs

//    //get a random lists
//    double count = 0.0;
//    int random = rand()% numSong;
//    while (count + random < Duration){
//        random = rand()% numSong;
//
//    }


}
int main(){
    testRandomPlaylist("aList",10.0);
    return 0;
}

