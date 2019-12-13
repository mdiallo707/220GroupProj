#include <iostream>

#include "TestLib.h"
#include "PlaylistLinkedQueue.h"
// Created by Mariama Diallo on 12/2/19.
//  PlaylistLinkedqueue test file


void EnqueueAndCalcDurationTest(){
    std::cout << "-------EnqueueAndCalcDurationTest---------" <<std::endl;
    PlaylistLinkedQueue testQueue;



    testQueue.enqueue("Fruit","Abra",5.41);
    printAssertEquals(5.41,testQueue.calcDuration());
    testQueue.enqueue("Nice","The Carters",3.53);
    printAssertEquals("Fruit", testQueue.dequeue());
    testQueue.enqueue("There will be Sunshine","Snoh",3.36);
    testQueue.enqueue("Energy","Sampa",4.58);
    printAssertEquals(11.47,testQueue.calcDuration());
    printAssertEquals("Nice", testQueue.dequeue());
    printAssertEquals("There will be Sunshine", testQueue.dequeue());
    printAssertEquals("Energy", testQueue.dequeue());
    printAssertEquals(0.0,testQueue.calcDuration());
    printAssertEquals(true, testQueue.isEmpty());


    try {
        testQueue.dequeue();
        std::cout << "FAIL: should have thrown exception from dequeue"<< std::endl;
    }
    catch(std::out_of_range& e){
        printAssertEquals("Can't dequeue from an empty queue", e.what());
    }
    std::cout << "--done--" <<std::endl;
}

void AllSongsInPlaylistTest() {
    std::cout << "-------AllSongsInPlaylistTest---------" << std::endl;
    std::string weekendVibe;
    PlaylistLinkedQueue playList1 = PlaylistLinkedQueue();
    playList1.enqueue("Fruit", "Abra", 5.41);
    playList1.enqueue("Fruit2", "Abra2", 5.41);
    playList1.enqueue("Fruit3", "Abra3", 5.41);
    if (!playList1.isEmpty()) {
        playList1.allSongsInPlaylist(weekendVibe);

    } else {

        std::cout << "Playlist is empty, please add songs" << std::endl;
    }


}
void RemoveSongsTest(){
    std::cout << "-------RemoveSongsTest---------" << std::endl;
    std::string weekendVibe;
    PlaylistLinkedQueue playList1 = PlaylistLinkedQueue();
    playList1.enqueue("Fruit", "Abra", 5.41);
    playList1.enqueue("Fruit2", "Abra2", 5.41);
    playList1.enqueue("Fruit3", "Abra3", 5.41);
    if (!playList1.isEmpty()) {
        playList1.allSongsInPlaylist(weekendVibe);
        playList1.removeSong(weekendVibe,"Abra","Fruit");
        playList1.allSongsInPlaylist(weekendVibe);

    } else {

        std::cout << "Playlist is empty, please add songs" << std::endl;
    }

}
void PlayNextSongsTest(){
    std::cout << "-------PlayNextSongsTest---------" << std::endl;
    std::string weekendVibe;
    PlaylistLinkedQueue playList1 = PlaylistLinkedQueue();
    playList1.enqueue("Fruit", "Abra", 5.41);
    playList1.enqueue("Fruit2", "Abra2", 5.41);
    playList1.enqueue("Fruit3", "Abra3", 5.41);
    if (!playList1.isEmpty()) {
        playList1.allSongsInPlaylist(weekendVibe);
        playList1.playNextSong(weekendVibe);
        playList1.allSongsInPlaylist(weekendVibe);
        playList1.playNextSong(weekendVibe);
        playList1.allSongsInPlaylist(weekendVibe);
        playList1.playNextSong(weekendVibe);
        playList1.allSongsInPlaylist(weekendVibe);

    }
    else {

        std::cout << "Playlist is empty, please add songs" << std::endl;
    }


}




int main() {
    EnqueueAndCalcDurationTest( );
    RemoveSongsTest();
    AllSongsInPlaylistTest();
    PlayNextSongsTest();

}
