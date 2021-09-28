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
    Stack = new StackOfChar();
    std::string entry;
    bool flag;
  
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
                if(Stack->isEmpty())
                {
                    flag = false;
                }
                 Stack->push(charsArr[i]);
            }
            else if(charsArr[i] == '(')
            {   
                if(Stack->isEmpty())
                {
                    flag = false;
                    
                }
                Stack->push(charsArr[i]);
            }
            else if(charsArr[i] == '}')
            {
                try
                {
                    Stack->pop();
                    flag = Stack->isEmpty();
                }
                catch(std::exception& e)
                {
                    std::cout << "Your sequence is not balanced\n";
                    Stack = nullptr;
                    delete Stack;
                    break;
                }
            }
            else if(charsArr[i] == ')')
            {
                try
                {
                    Stack->pop();
                    flag = Stack->isEmpty();
                }
                catch(std::exception& e)
                {
                    std::cout << "Your sequence is not balanced\n";
                    Stack = nullptr;
                    delete Stack;
                    break;
                }
                
            } 
        }
    if(flag)
    {
        std::cout << "Your sequence is balanced\n";
        Stack = nullptr;
        delete Stack;
    }
    if(!flag)
    {
        std::cout << "Your sequence is not balanced\n";
        
    }
    
        
}

Parser::~Parser()
{
    Stack = nullptr;
    delete[] Stack;
}