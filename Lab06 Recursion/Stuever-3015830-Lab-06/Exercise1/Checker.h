/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 1
 * @filename Checker.h
 * @description This file is the header file for Checker.cpp
 * @date 10/26/2021
 **/ 

#ifndef CHECKER_H
#define CHECKER_H
#include <string>

class Checker
{
private:
    int counter, character;
public:
    /**
     * @pre main.cpp will call it
     * @post the member variables will be set to 0 to begin.
     */
    Checker();

    /**
     * @pre This requires main.cpp to have given the function a string to input
     * @post this will return a bool telling us whether or not the string is balanced. This uses similar strucuture to the stack exercise
     *      where a counter is utilized to tell if the "stack" is empty.
     * @return Will return a bool telling us if it is balanced or not.
     **/ 
    bool isBalanced(std::string input);
};
#endif
