//
// Created by leianna chen on 2019/12/12.
//

#ifndef INC_220GROUPPROJ_COLLECTLINKEDLIST_H
#define INC_220GROUPPROJ_COLLECTLINKEDLIST_H

#include "CollectLinkedNode.h"
#include "SongsLinkedNode.h"
#include "PlaylistLinkedQueue.h"

class CollectLinkedList {
private:
    CollectLinkedNode* front;
    int currCount;

    CollectLinkedList& operator=(const CollectLinkedList& arrayListToCopy);
public:
    /**
     * Constructor
     */
    CollectLinkedList();

    //Destructor
    ~CollectLinkedList();

    /**
     * appends the new item to the end of the list
     * @post the list has an additional value in it, at the end
     */
    void insertAtEnd(std::string playlistTitleIn, PlaylistLinkedQueue aPointer);

    /**
     * gets a value from the list
     * @param index the location from which to get the value
     * @return a copy of the item at index
     * @throws out_of_range exception if index is invalid
     */
    std::string getTitleValueAt(int index);
    PlaylistLinkedQueue getAddressValueAt(int index);

    /**
     * gives a string representation of the current list
     * @returns a string representing the given list in the exact format shown below
     * {1, 2, 3, 4, 5}
     */
    std::string PrintAllTitle();

    /**
     * checks if there are any valid items in the list
     * @return true if there are no valid items in the list, false otherwise
     */
    bool isEmpty();

    /**
     * returns a count of valid items currently in the list
     * @returns the number of valid items in the list
     */
    int itemCount();

    /**
     * makes the list empty of valid items
     * @post the list is empty, such that isEmpty() == true
     */
    void clearList();

    /**
     * Searches an int array for a certain value
     * @return the index of the first occurrence of numToFind if it is present, otherwise returns -1
     */
    int find(std::string playlistTitleIn);


    /**
     * removes the item at index from the list, and returns a copy of that item
     * @param index the location from which to get the value
     * @post the item at index is removed from the list, everything else is shifted down one
     * @return a copy of the item at index
     * @throws out_of_range exception if index is invalid
     */
    std::string removeValueAt(int index);



    //Private to disable copying and assigning from outside class, don't implement these methods
    CollectLinkedList(const CollectLinkedList& arrayListToCopy);
};


#endif //INC_220GROUPPROJ_COLLECTLINKEDLIST_H
