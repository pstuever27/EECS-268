/**
 * @file main.cpp
 * @author Paul Stuever
 * @brief This file will simply run the different executive functions. It also includes a function "continuescript" That will allow the user to continue the data when they are ready.
 * @version 0.1
 * @date 2021-11-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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
          std::cout << "\nWARNING: THIS TAKES A LONG TIME...LIKE 10 MINUTES...\nIT WILL ITERATE THROUGH THE NUMBERS, THEN GIVE THE RESULTS.\n\nPLEASE NOTE: ALL YOU'LL SEE IS NUMBERS UNTIL IT IS FINISHED.\n\n";
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
