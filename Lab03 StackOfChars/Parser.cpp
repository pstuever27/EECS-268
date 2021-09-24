#include "Parser.h"
#include "Node.h"
#include <iostream>
#include <string>

Parser::Parser()
{
    m_length = 0;
}

void Parser::runParse();
{
    std::string entry;
    std::cout << "Please type your entry: ";
    std::cin >> entry;

    int n = entry.length();

    char charsArr[n];

    for(int i = 0; i < n; i++)
    {
        charsArr[i] = entry[i];
    }


    
}