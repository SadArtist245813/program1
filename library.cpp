/*
 *  Author: ...
 *  Class: library.cpp
 *  Description: hold the list of constellations and functions to mess with the list.
 */

#include <iostream>
#include "library.h"
#include "constellation.h"

void Library::buildlibrary(){
    Constellation c;
    c.setName("Scorpius");
    c.setDescription("Description");
    c.setStar("star");
    list.push_back(c);
}