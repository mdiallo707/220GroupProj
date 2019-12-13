
#include <iostream>
#include "CollectPlaylists.h"
#include "TestLib.h"
#include "PlaylistLinkedQueue.h"
#include "CollectPlaylists.h"
#include "Inventory.h"
using namespace std;
void testLinklist(){
    //two songList
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
    songCollection.insertAtEnd("songA",playList1);
    songCollection.insertAtEnd("songB",playList2);

    //test the address
    int address1 = songCollection.find("songA");
    int address2 = songCollection.find("songB");
    std::cout << "Test getAddressValue at and find a playlist: " << std::endl;
    std::cout << songCollection.getTitleValueAt(address1) << std::endl;
    std::cout << songCollection.getTitleValueAt(address2) << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    //test display the song on one playlist
    std::string Songs1;
    std::cout << "Test print specific playlist: " << std::endl;
    songCollection.getAddressValueAt(address1).allSongsInPlaylist(Songs1);
    std::cout << "---------------------------------------" << std::endl;

}

void testRandomPlaylist(std::string playlistTitleIn, double Duration){

//    //count songs
//    int numsongs =
//    //get a random lists
//    double count = 0.0;
//    int random = rand()% numSong;
//    while (count + random < Duration){
//        random = rand()% numSong;
//
//    }


}
int main(){
    testLinklist();
//    testRandomPlaylist("aList",10.0);
    return 0;
}

