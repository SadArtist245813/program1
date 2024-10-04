/*
 *  Author: The Cilestrials
 *  Class: library.h
 *  Description: Holds the list of constellations and functions to mess with the list.
 */

#include <iostream>
#include <string>
#include "constellation.h"

class Library{
    private:
        int numConstellations = 0;
        Constellation* constellationArray[0];
        Constellation **constPtr = constellationArray;  
    public:
        void addConstellation(std::string, std::string, std::string);
        void findConstellation(std::string);
        void printAllConstillations();
};