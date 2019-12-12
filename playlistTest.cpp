#include <iostream>

#include "TestLib.h"
#include "PlaylistLinkedQueue.h"



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



int main() {
    EnqueueAndCalcDurationTest( );

}