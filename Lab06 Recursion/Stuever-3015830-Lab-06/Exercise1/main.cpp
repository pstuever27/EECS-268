/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 1
 * @filename main.cpp
 * @description This file will take the input from the user of the ()'s and will pass it into the recursive function "Checker" to see if it is balanced or not.
 * @date 10/26/2021
 **/ 

#include <iostream>
#include "Checker.h"

int main(int argc, char* argv[])
{
    if(argc == 0)
    {
        std::cout << "Please enter an input!\n";
        return(0);
    }
    else
    {
        std::string input = argv[1];
        Checker run;
        bool isTrue;
        isTrue = run.isBalanced(input);

        if(isTrue)
        {
            std::cout << "The input " << input << " is balanced.\n";
            return(0);
        }
        std::cout << "The input " << input << " is not balanced.\n";
        return(0);

    }
}