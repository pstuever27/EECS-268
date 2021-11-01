/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 3
 * @filename Fib.h
 * @description Header file for Fib.cpp
 * @date 10/26/2021
 **/ 
#ifndef FIB_H
#define FIB_H
#include <iostream>

class Fib
{
private:
    int m_oneback;
    int m_twoback;
public:
    /**
     * @pre None
     * @post Sets the first 2 numbers of the sequence to 1
     * @return None
     **/ 
    Fib();

    /**
     * @pre Takes in the desired 'ith' number from main.cpp
     * @post Will calculate the 'ith' number in the sequence using recursion.
     * @return Will return the exact number in the sequence at the given index.
     **/ 
    int ith(int input, int number);

    /**
     * @pre Requires the user to give a number to see if it is in the sequence
     * @post Will tell us if the number is in the sequence using recursive functionality
     * @return Returns a bool of whether or not the number is in the sequence.
     **/ 
    bool doesContain(int number, int index);
};
#endif
