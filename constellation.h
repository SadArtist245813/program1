/*
 *  Author: The Cilestrials
 *  Class: constellation.h
 *  Description: Holds information for a constellation.
 */

#ifndef CONSTELLATION_H
#define CONSTELLATION_CPP

#include <iostream>
#include <string>
#include <vector>
#include "star.h"

class Constellation{
    private:
        std::string name;
        Star star;
        std::string description;

    public:
        void setName(std::string);
        std::string getName();
        void setStar(std::string);
        void setDescription(std::string);
        void printConstellation();
};

#endif