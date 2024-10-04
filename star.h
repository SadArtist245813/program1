/*
 *  Author: The Cilestrials
 *  Class: star.cpp
 *  Description: Holds information about a star.
 */

#ifndef STAR_H
#define STAR_H

#include <iostream>
#include <string>

class Star{
    private:
        std::string* name;
    public:
        void setName(std::string);
        void printStar();
};

#endif