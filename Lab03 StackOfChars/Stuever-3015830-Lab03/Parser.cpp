/** -----------------------------------------------------------------------------
 *
 * @file: Parser.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: This class will be used to actually preform the function by taking in a string of '{}' and "()"and telling us if it is balanced 
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Parser.h"
#include <iostream>
#include <string>

Parser::Parser()
{
    Stack = nullptr;
    m_length = 0;
}
//"Loaded gun" technique - Take in one char. If the char is '{', then add it to the stack, if the next one is '}', then pop the '{' off the stack.
    //Finally, check after the char array is empty to see if the stack is empty.

void Parser::runParse()
{
    Stack = new StackOfChar();
    std::string entry;
    bool flag;
    bool breaker = false;
  
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
                else{
                 flag = true;
                }
                Stack->push(charsArr[i]);
            }
            else if(charsArr[i] == '(')
            {   
                if(Stack->isEmpty())
                {
                    flag = false;
                }else
                {
                flag = true;
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
                    breaker = true;
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
                    breaker = true;
                    break;
                }
                
            } 
        }
        flag = Stack->isEmpty();
    if(flag && !breaker)
    {
        std::cout << "Your sequence is balanced\n";
        Stack = nullptr;
        delete Stack;
    }
    if(!flag && !breaker)
    {
        std::cout << "Your sequence is not balanced\n";
        Stack = nullptr;
        delete Stack;
    }
        
}

Parser::~Parser()
{
    Stack = nullptr;
    delete[] Stack;
}