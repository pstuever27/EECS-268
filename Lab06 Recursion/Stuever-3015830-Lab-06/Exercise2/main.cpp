/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 2
 * @filename main.cpp
 * @description This file will take in a number from the user for which day they want to see the sick count for. After passing to the function, it will output the 
 *         number of people with the flu.
 * @date 10/26/2021
 **/ 

#include <iostream>
#include "Outbreak.h"

int main()
{
    int day, count;
    std::cout << "-----OUTBREAK!-----\nWhat day do you want a sick count for?: ";
    std::cin >> day;
    Outbreak run;
    try
    {
        count = run.Counter(day);
        std::cout <<"Total people with the flu: " << count << "\n------------------\n";
    }
    catch(const std::exception& e)
    {
        std::cout << "Invalid day!\n-------------------\n";
    }
    
    return(0);

}