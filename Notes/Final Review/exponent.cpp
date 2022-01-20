#include <iostream>

float exponent(float base, float current, float exp)
{
    if(exp == 1)
    {
        return(current);
    }
    else 
    {
        current = base*current;
        exp--;
        return(exponent(base, current, exp));
    }
}


int main()
{
    float base, exp;
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exp: ";
    std::cin >> exp;

    float final = exponent(base, base, exp);

    std::cout << "Final result: " << final << '\n';

    return(0);
}