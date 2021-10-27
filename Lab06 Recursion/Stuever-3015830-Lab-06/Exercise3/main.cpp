/**
 * @name Paul Stuever
 * @assignment EECS 268 Lab06 - Exercise 3
 * @filename main.cpp
 * @description This file will take in the desired function, either -i or -v. to run the recursive funtion to find either the 'ith' number in the Fibonacci Sequence,
 *    or check to see if a number is in the sequence. Then, it will output the answer to the desired function.
 * @date 10/26/2021
 **/ 

#include <iostream>
#include <string>
#include "Fib.h"

int main(int argc, char* argv[])
{
  if(argc < 3)
  {
    std::cout << "Incorrect number of parameters\n";
  }
  else
  {
    std::string function = argv[1];
    int input = std::stoi(argv[2]);
    Fib Fibs;
    if(function == "-i")
    {
      try{
      int i = 0;
      int result = Fibs.ith(input, i);
      std::cout << result << '\n';
      }
      catch(std::exception& e)
      {
        std::cout << "Invalid Index!\n";
      }
    }
    else if(function == "-v")
    {
      int index = 0;
      Fib contain;
      std::string result = contain.doesContain(input, index) ? " is in " : " is not in ";
      std::cout << input << result << "the sequence\n";
    }
    else
    {
      std::cout << "Invalid Function!\n";
    }
  }
}
