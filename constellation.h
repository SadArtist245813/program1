/*
 *  Author: ...
 *  Class: constellation.h
 *  Description: Holds information for a constellation
 */

#ifndef CONSTELLATION_H
#define CONSTELLATION_CPP

#include <iostream>
#include <string>

class constellation{
    private:
        std::string name;
        std::string comboStars[];
        std::string description;

    public:
        void printConstellation();
};

#endif