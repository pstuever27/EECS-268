#include <iostream>
#include "Checker.h"

int main(int argc, char* argv[])
{
    if(argc == 0)
    {
        std::cout << "Please enter an input!\n";
        return(0);
    }
    else
    {
        std::string input = argv[1];
        Checker run;
        bool isTrue;
        isTrue = run.isBalanced(input);

        if(isTrue)
        {
            std::cout << "The input " << input << " is balanced.\n";
            return(0);
        }
        std::cout << "The input " << input << " is not balanced.\n";
        return(0);

    }
}