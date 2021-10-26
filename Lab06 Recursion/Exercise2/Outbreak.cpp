#include "Outbreak.h"
#include <iostream>
#include <string>

Outbreak::Outbreak()
{
    dayone = 1;
    daytwo = 8;
    daythree = 22;
    //number will start on the 4th day 
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