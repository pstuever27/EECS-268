/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 2
 * @filename Outbreak.h
 * @description This is the header file for Outbreak.cpp
 * @date 10/26/2021
 **/ 

#ifndef OUTBREAK_H
#define OUTBREAK_H

class Outbreak
{
private:
    int dayone, daytwo, daythree, number;
public:
    /**
     * @pre None
     * @post Will set the first 3 days to the given numbers, as well as the sick count to 31 to start out with.
     * @return None
     **/ 
    Outbreak();

    /**
     * @pre This will require main.cpp to pass in a day for this to count the sick to.
     * @post Will calculate the sick count using recursion
     * @return Will return an integer for the sick count on the desired day.
     **/ 
    int Counter(int day);
};
#endif

