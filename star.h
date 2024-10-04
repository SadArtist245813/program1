/*
 *  Author: The Cilestrials
 *  Class: star.cpp
 *  Description: Holds information about a star.
 */

#include <iostream>
#include <string>

class Star{
    private:
        std::string* name;
    public:
        void setName(std::string);
        void printStar();
};