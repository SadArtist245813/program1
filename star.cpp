/*
 *  Author: The Cilestrials
 *  Class: star.cpp
 *  Description: Holds information about a star.
 */

#include <iostream>
#include <string>
#include "star.h"

//allows to set the name of the star
void Star::setName(std::string str){
    *name = str;
}

//prints star all information about a star
void Star::printStar(){
    std::cout << *name << " ";
}