/*
 *  Author: The Cilestrials
 *  Class: library.h
 *  Description: Holds the list of constellations and functions to mess with the list.
 */

#include <iostream>
#include <vector>
#include "constellation.h"

class Library{
    private:
         std::vector<Constellation> list;
    public:
        void buildlibrary();
        void printAllConstillations();
};