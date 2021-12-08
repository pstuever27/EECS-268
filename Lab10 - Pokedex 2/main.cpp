/**
 * @file main.cpp
 * @author Paul Stuever
 * @brief main file that takes in the filename and passes it to executive
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#include <iostream>
#include "Executive.h"

int main(int argc, char* argv[])
{
    if(argc>1)
    {
        Executive run(argv[1]);
        run.menu();
    }
    else
    {
        std::cout << "Please enter a filename!\n";
    }
    return(0);
}