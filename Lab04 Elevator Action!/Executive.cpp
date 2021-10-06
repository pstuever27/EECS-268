#include "Executive.h"
#include <iostream>
#include <fstream>
#include <string>

Executive::Executive(std::string argv)
{
  Elevator = nullptr;
  Line = nullptr;
  m_fileName = argv;
}
Executive::~Executive()
{
  if(Elevator != nullptr)
  {
    Elevator = nullptr;
  }
  if(Line != nullptr)
  {
    Line = nullptr;
  }
  delete[] Elevator;
  delete[] Line;
}
void Executive::run()
{
  std::ifstream inFile;
  inFile.open(m_fileName);
  std::string action;
  std::string name;
  int dropoffs;
  int counter = 0;
  Elevator = new Stack<std::string>();
  Line = new Queue<std::string>();

  if(inFile.is_open())
  {

    while(inFile >> action)
    {
    
      if(action == "WAIT")
      {
        inFile >> name;
        Line->enqueue(name);

      }
      if(action == "PICK_UP")
      {
        
        while(counter < 7 && !Line->isEmpty())
        {
            Elevator->push(Line->peekFront());
            Line->dequeue();
            counter++;
        }
        
      }
   
      if(action == "DROP_OFF")
      {
        inFile >> dropoffs;
        int j = 0;
        while(j<dropoffs)
        {
          try
          {
            Elevator->pop();
          }
          catch(const std::exception& e)
          {
          }
          j++;
        }
        counter = 0;
      }
      if(action == "INSPECTION")
      {
        bool empty;
        std::string elevator_next;
        std::string Line_next;
        empty = Elevator->isEmpty();

        try
        {
        elevator_next = Elevator->peek();
        }
        catch(const std::exception& e)
        {
          std::cout << "The elevator is empty\n";
        }
        if(!empty)
        {
          std::cout << "The elevator is not empty\n";
          std::cout << elevator_next << " is the next person to get off the elevator\n";
        }
        try{
        Line_next = Line->peekFront();
        std::cout << Line_next << " is the next person to get on the elevator\n";
        }
        catch(const std::exception& e)
        {
          std::cout << "Queue is empty\n";
        }
      }
    }
    delete Line;
    delete Elevator;
  }
  else
  {
    std::cout << "Invalid filename!\n";
  }
}
