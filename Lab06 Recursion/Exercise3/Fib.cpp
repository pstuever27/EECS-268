#include <iostream>
#include "Fib.h"

Fib::Fib()
{
  m_oneback = 1;
  m_twoback = 1; 
}

int Fib::ith(int input, int number)
{
  if(input<0)
  {
    throw(std::runtime_error("Invalid Index!"));
  }

  if((input == 2 || input == 1) && number == 0)
  {
    number = 1;
    return(number);
  }
  if(input == 0)
  {
    return(number);
  }
  else
  {
    int temp = number;
    m_twoback = m_oneback;
    m_oneback = temp;
    number =  m_oneback + m_twoback;
    input--;
    return ith(input, number);
  }
}

bool Fib::doesContain(int number, int index)
{
  if(number == 0 || number == 1)
  {
    return (true);
  }
    int result = 0;
    
    result = ith(index, 0);
    std::cout << result << '\n';
    if(result == number)
    {
      return(true);
    }
    else if(index == 0 && result != number)
    {
      return(false);
    }
    else
    {
      return(doesContain(number, index++));
    }
}


