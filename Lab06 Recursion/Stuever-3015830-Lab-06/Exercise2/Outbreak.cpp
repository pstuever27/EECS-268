/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 2
 * @filename Outbreak.cpp
 * @description This function uses recursion to add up the sick count to a certain day. It uses similar functionality to the Fibonacci Sequence problem except
 *      it will add the last 3 digits instead of two. Also checks for an invalid index.
 * @date 10/26/2021
 **/ 

#include "Outbreak.h"
#include <iostream>
#include <string>

Outbreak::Outbreak()
{
    dayone = 1;
    daytwo = 8;
    daythree = 22;
    number = 31;
}

int Outbreak::Counter(int day)
{
    //taking care of the first three
    if(day == 1)
    {
        return(dayone);
    }else if(day == 2)
    {
        return(daytwo);
    }
    else if(day == 3)
    {
        return(daythree);
    }
    else if(day == 0)
    {
        if(number != 0)
        {
            throw(std::runtime_error("Invalid Index!\n"));
        }
        return(number);
    }
    else
    {
        
        number = dayone + daytwo + daythree;
        dayone = daytwo;
        daytwo = daythree;
        daythree = number;
        day--;
        return Counter(day);

    }


}