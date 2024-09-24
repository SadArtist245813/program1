/*
 *  Author: ...
 *  Class: star.cpp
 *  Description: Holds information for a constellation
 */

#include <iostream>
#include <string>
#include "star.h"

void Star::setName(std::string str){
    name = str;
}

void Star::printStar(){
    std::cout << name;
}