/*
 *  Author: The Cilestrials
 *  Class: library.h
 *  Description: Holds the list of constellations and functions to mess with the list.
 */

#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include "constellation.h"

class Library{
    private:
        int numConstellations = 0;
        //pointer to an array of pointers
        Constellation* (*constellationArray)[0];
    public:
        void addConstellation(std::string, std::string, std::string);
        void findConstellation(std::string);
        void printAllConstillations();
};

#endif