#include "Executive.h"
#include <iostream>
#include <fstream>

Executive::Executive(std::string argv)
{
  Elevator = nullptr;
  Line = nullptr;
  argv = m_fileName;
}
Executive::~Executive()
{
  delete Elevator;
  delete Line;
}
void Executive::run()
{
  std::ifstream inFile;
  inFile.open(m_fileName);
  std::string action;
  std::string name;

  if(inFile.is_open())
  {
    while(inFile >> action)
    {
      inFile >> name;
      if(action == "WAIT")
      {
        Line = Line->enqueue(name);
      }
      else if(action == "PICK_UP")
      {
        int i = 0;
        while(i<7)
        {
          try
          {
            Elevator = Line->peekFront();
            Line = Line->dequeue();
            i++;
          }
          catch(std::exception& e)
          {
            break;
          }
        }
      }
      else if(action == "DROP_OFF")
      {
        int i = 0;
        while(i<7)
        {
          try
          {
            Elevator = Elevator->pop();
          }
          catch(const std::exception& e)
          {
            break;
          }
        }
      }
      else if(action == "INSPECTION")
      {
        bool empty;
        std::string elevator_next;
        std::string Line_next;
        empty = Elevator->isEmpty();
        
      
        elevator_next = Elevator->peek();
        Line_next = Line->peekFront();

          if(empty)
          {
            std::cout << "The elevator is empty\n";
          }
          else
          {
            std::cout << "The elevator is not empty\n";
            std::cout << elevator_next << " is the next person to get off the elevator\n";
          }
        
        std::cout << Line_next << " is the next person to get on the elevator\n";
      }
    }
  }
  else
  {
    std::cout << "Invalid filename!\n";
  }
}
