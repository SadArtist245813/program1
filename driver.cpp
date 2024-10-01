/*\
 *  Author: The Cilestrials
 *  Class: driver.cpp
 *  Description: allows access to the library
 */

#include <iostream>
#include <string>
#include <fstream>
#include "library.h"

Library buildLibrary();

int main(){
    Library lib = buildLibrary();
    std::string str1, str2, str3;

    int choice = 0;
    do{
        std::cout << "\n\nWhat are you gonna do you gooby goober?\n";
        std::cout << "\t1. Print the entire library you ass.\n";
        std::cout << "\t2. Make me search for your fucking constellation.\n";
        std::cout << "\t3. ANOTHER FUCKING CONSTELLATION!!!!!!!.\n";
        std::cout << "\t0. Quit.\n";
        std::cout << "Choice: \n";
        std::cin >> choice;

        switch(choice){
            case 1:
                std::cout << "Constellations:\n";
                std::cout << "-------------------------------------------\n";
                lib.printAllConstillations();
                std::cout << "-------------------------------------------\n";
                break;
            case 2:
                std::cout << "What is the name of the constellation? ";
                std::cin >> str1;
                lib.findConstellation(str1);
                break;
            case 3:
                std::cout << "What is the name of the constellation? ";
                std::cin >> str1;
                std::cout << "How would you describe the constellation? ";
                std::cin >> str1;
                std::cout << "What is the name? ";
                std::cin >> str1;
                lib.addConstellation(str1, str2, str3);

                std::cout << "There you ass.\n"; 

                break;
            case 0:
                std::cout << "Be gone.";
                break;
        }
    }while(choice);

    return 0;
}

Library buildLibrary(){
    std::ifstream MyFile("Constellations_TEST.txt");
    Library lib;
    std::string str1, str2, str3;

    if(MyFile.good()){
        while(std::getline(MyFile, str1, '#')){
            std::getline(MyFile, str2, '#');
            std::getline(MyFile, str3, '#');
            lib.addConstellation(str1, str2, str3);
        }

    }

    MyFile.close();
    return lib;
}