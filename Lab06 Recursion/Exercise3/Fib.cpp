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

bool Fib::doesContain(int number, int returned)
{
  if(number == 0 || number == 1)
  {
    return(true);
  }
  else if(returned > number)
  {
    return(false);
  }
  else if(returned == number)
  {
    return(true);
  }
  int temp = returned;
  m_twoback = m_oneback;
  m_oneback = temp;
  returned = m_oneback + m_twoback;
  return doesContain(number, returned);
}


