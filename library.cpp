/*
 *  Author: The Cilestrials
 *  Class: library.cpp
 *  Description: Holds the list of constellations and functions to mess with the list.
 */

#include <iostream>
#include <string>
#include "library.h"
#include "constellation.h"

//builds the library with all the needed functions
//requirments: the name, the description, the star name
void Library::addConstellation(std::string str1, std::string str2, std::string str3){
    Constellation c;
    c.setName(str1);
    c.setDescription(str2);
    c.setStar(str3);

    Constellation* arr[numConstellations + 1];
    if(numConstellations != 0){
        for(int i = 0; i < numConstellations; i++){
            arr[i] = (*constellationArray)[i];
        }
    }
    arr[numConstellations] = &c;
    numConstellations++;

    delete &constellationArray;
    constellationArray = &arr;
}

//prints the found constellation's information
//requirments: the name
void Library::findConstellation(std::string str){
    bool found = false;
    for(int i = 0; i < numConstellations; i++){
        if((*constellationArray)[i]->getName() == str){
            (*constellationArray)[i]->printConstellation();
            found = true;
        }
    }

    if(!found){
        std::cout << "Constellations not found :(";
    }
}

//prints all the information in the library
void Library::printAllConstillations(){
    for(int i = 0; i < numConstellations; i++){
        (*constellationArray)[i]->printConstellation();
    }
}