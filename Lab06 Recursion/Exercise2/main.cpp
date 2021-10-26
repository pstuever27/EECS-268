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