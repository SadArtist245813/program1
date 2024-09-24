/*
 *  Author: The Cilestrials
 *  Class: library.cpp
 *  Description: Holds the list of constellations and functions to mess with the list.
 */

#include <iostream>
#include <vector>
#include "library.h"
#include "constellation.h"

//builds the library with all the needed functions
void Library::buildlibrary(){
    Constellation c;
    c.setName("Scorpius");
    c.setDescription("Description");
    c.setStar("star");
    list.push_back(c);
}

//prints all the information in the library
void Library::printAllConstillations(){
    for(int i = 0; i < list.size(); i++){
        list[i].printConstellation();
    }
}