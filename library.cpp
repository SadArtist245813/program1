/*
 *  Author: The Cilestrials
 *  Class: library.cpp
 *  Description: Holds the list of constellations and functions to mess with the list.
 */

#include <iostream>
#include <vector>
#include <string>
#include "library.h"
#include "constellation.h"

//builds the library with all the needed functions
//requirments: the name, the description, the star name
void Library::addConstellation(std::string str1, std::string str2, std::string str3){
    Constellation c;
    c.setName("str1");
    c.setDescription("str2");
    c.setStar("str3");
    list.push_back(c);
}

//prints the found constellation's information
//requirments: the name
void Library::findConstellation(std::string str){
    for(int i = 0; i < list.size(); i++){
        if(list[i].getName() == str){
            list[i].printConstellation();
        }
    }
}

//prints all the information in the library
void Library::printAllConstillations(){
    for(int i = 0; i < list.size(); i++){
        list[i].printConstellation();
    }
}