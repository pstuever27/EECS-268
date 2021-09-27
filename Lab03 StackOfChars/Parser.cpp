#include "Parser.h"
#include <iostream>
#include <string>

Parser::Parser()
{
    m_length = 0;
}
//"Loaded gun" technique - Take in one char. If the char is '{', then add it to the stack, if the next one is '}', then pop the '{' off the stack.
    //Finally, check after the char array is empty to see if the stack is empty.

void Parser::runParse()
{
    Stack = new StackOfChar<char>();
    std::string entry;
    int bracket_checker = 0;
    int par_checker = 0;
    std::cout << "Please type your entry: ";
    std::cin >> entry;

    int n = entry.length();

    char charsArr[n];

    for(int i = 0; i < n; i++)
    {
        charsArr[i] = entry[i];
    }

    //checker for the brackets
        for(int i = 0; i < n; i++)
        {
            if(charsArr[i] == '{')
            {
                stack.push(charsArr[i]);
                bracket_checker++;
            }
            else if(charsArr[i] == '(')
            {
                stack.push(charsArr[i]);
                par_checker++;
            }
            else if(charsArr[i] == '}')
            {
                stack.pop();
                bracket_checker--;
            }
            else if(charsArr[i] == ')')
            {
                stack.pop();
                par_checker--;
            }
        }
        if(par_checker == 0 && bracket_checker == 0)
        {
            std::cout << "Your sequence is balanced.\n";
        }
        if(par_checker != 0 && bracket_checker != 0 )
        {
            std::cout << "Your sequence is not balanced\n";
        }  
}

Parser::~Parser()
{
    delete[] Stack;
}