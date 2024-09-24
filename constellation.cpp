/*
 *  Author: ...
 *  Class: constellation.cpp
 *  Description: Holds information for a constellation
 */

#include <iostream>
#include "constellation.h"
#include "star.h"

void Constellation::setName(std::string str){
    name = str;
}

void Constellation::setStar(std::string str){
    Star star;
    star.setName(str);
    comboStars.push_back(star);
}

void Constellation::setDescription(std::string str){
    name = str;
}

void Constellation::printConstellation(){
    std::cout << name;
}