#include "executive.h"
#include <iostream>
#include <fstream>

executive::executive(std::string argv)
{
    m_fileName = argv;
    
    container = nullptr;
    circle_obj = nullptr;
    rectangle_obj = nullptr;
    triangle_obj = nullptr;
}
void executive::run()
{
  std::string function;
  int index = 0;
  std::string type;
  double radius = 0;
  double base = 0;
  double height = 0;
  std::ifstream inFile;
  inFile.open(m_fileName);

  if(inFile.is_open())
  {
      inFile >> amount;
      if (amount > 0)
      {
          container = new ShapeContainer(amount);

          do {
              inFile >> function >> index;


              if (function == "ADD")
              {
                  inFile >> type;
                  if (type == "REC")
                  {
                      inFile >> base >> height;

                      if(index >= 0 && index < amount)
                      {
                          rectangle_obj = new rectangle(base, height);
                      }
                      try
                      {
                          container->add(rectangle_obj, index);
                      }
                      catch(std::exception& e)
                      {
                          std::cout << e.what() << '\n';
                      }    
                 
                  }
                  else if (type == "TRI")
                  {
                      inFile >> base >> height;

                      if(index >= 0 && index < amount)
                      {
                          triangle_obj = new triangle(base, height);
                      }
                      try
                      {
                          container->add(triangle_obj, index);
                      }
                      catch(std::exception& e)
                      {
                          std::cout << e.what() << '\n';
                      }
                      
                  }
                  else if (type == "CIR")
                  {
                      inFile >> radius;

                      if(index >= 0 && index < amount)
                      {
                          circle_obj = new circle(radius);
                      }

                      try
                      {
                          container->add(circle_obj, index);
                      }
                      catch(std::exception& e)
                      {
                          std::cout << e.what() << '\n';
                      }
                      
                  }
              }
              else if (function == "DELETE")
              {
                  container->remove(index);
              }
              else if (function == "PRINT")
              {
                  std::cout << "Shape at index " << index << ":";

                  try
                  {
                      std::cout << container->shapeName(index) << " area = " << container->area(index) << '\n';
                  }
                  catch(std::exception& e)
                  {
                      std::cout << e.what() << '\n';
                  }
                  
              }

          } while (function != "EXIT");
          if(inFile.is_open())
          {
              inFile.close();
          }
          std::cout << "Exiting...\n";
      }
        if(amount < 0);
            {
                std::cout << "Unable to make the array.\nExiting...\n";
            }
  }else
  {
      std::cout << "File couldn't be opened!\n";
  }
  

}
executive::~executive()
{
    if(rectangle_obj != nullptr)
    {
        delete rectangle_obj;
    }
    if(circle_obj != nullptr)
    {
        delete circle_obj;
    }
    if(rectangle_obj != nullptr)
    {
        delete rectangle_obj;
    }
    if(container != nullptr)
    {
        delete container;
    }
}
