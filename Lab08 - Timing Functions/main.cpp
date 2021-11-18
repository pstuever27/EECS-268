#include "Executive.h"
#include <iostream>

bool continuescript()
{
  char continuer;
  std::cout << "Enter 'c' to continue the script: ";
  std::cin >> continuer;
  if(continuer == 'c' || continuer == 'C')
  {
    return(true);
  }
  else{
    continuescript();
  }
  return(true);
}

int main()
{
  Executive run;

  run.Stackpop();
  if(continuescript())
  {
    run.StackDestructor();
    if(continuescript())
    {
      run.Queuedequeue();
      if(continuescript())
      {
        run.Listone();
        if(continuescript())
        {
          run.Listlast();
          if(continuescript())
          {
            run.Printlist();
          }
        }
      }
    }
  } 
  
  return(0);
}
