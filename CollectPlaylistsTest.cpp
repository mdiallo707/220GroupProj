
#include <iostream>
#include "CollectPlaylists.h"
#include "TestLib.h"
#include "PlaylistLinkedQueue.h"
//-------usingtime--------
#include <chrono>
#include <ctime>
using namespace std;

void testRandomPlaylist(){
    std::string weekendVibe;
    PlaylistLinkedQueue playListTest = PlaylistLinkedQueue();
    playListTest.enqueue("Fruit", "Abra", 5.41);
    playListTest.enqueue("Fruit2", "Abra2", 5.41);
    playListTest.enqueue("Fruit3", "Abra3", 5.41);
    if (!playListTest.isEmpty()) {
        playListTest.allSongsInPlaylist(weekendVibe);

    } else

        std::cout << "Playlist is empty, please add songs" << std::endl;
}
int main(){
    testRandomPlaylist();

    return 0;
}

