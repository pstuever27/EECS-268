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