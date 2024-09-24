/*
 *  Author: ...
 *  Class: star.h
 *  Description: Holds information for a constellation
 */

#include <iostream>
#include <string>

class Star{
    private:
        std::string name;
    public:
        void setName(std::string);
        void printStar();
};