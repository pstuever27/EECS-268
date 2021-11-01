/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 1
 * @filename Checker.cpp
 * @description This file will take the input from main.cpp and will use recursion to tell us if it is balanced. Similar to the stackofchars lab, it will use 
 *  a counter to keep track of what is on the "stack"
 * @date 10/26/2021
 **/ 

#include "Checker.h"
#include <iostream>
#include <string>

Checker::Checker()
{
    counter = 0;
    character = 0;
}

bool Checker::isBalanced(std::string input)
{
    int length = input.length();
    if(input[character] == ')' && counter == 0 && character < length)
    {
        return(false);
    }
    if(input[character] == '(')
    {
        counter = counter + 1;
        character++;
        return isBalanced(input);
    }
    if(input[character] == ')')
    {

        counter = counter - 1;
        character++;
        return isBalanced(input);
    }
    if(counter == 0 && character == length)
    {
        return(true);
    }
    if(counter != 0)
    {
        return(false);
    }
    return(false);
}