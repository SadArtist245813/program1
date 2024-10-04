/*
 *  Author: The Cilestrials
 *  Class: constellation.cpp
 *  Description: Holds information for a constellation.
 */

#include <iostream>
#include "constellation.h"
#include "star.h"

//allows to set the name of the constellation
//requirments: the name
void Constellation::setName(std::string str) { name = str; }

//returns the name of the constellation
std::string Constellation::getName() { return name; }

//allows add a star to the back of the array
//requirments: the name
void Constellation::setStar(std::string str){
    star.setName(str);
}

//allows to set the description of the constellation
//requirments: the description
void Constellation::setDescription(std::string str) { name = str; }

//prints out the information about the constellation
void Constellation::printConstellation(){
    std::cout << name << std::endl;
    star.printStar();
    std::cout << "\n" << description << std::endl;
}