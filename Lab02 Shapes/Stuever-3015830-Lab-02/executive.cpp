/** -----------------------------------------------------------------------------
 *
 * @file: executive.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Oh boy. This class takes care of mostly everything related to fileIO and using the various pointers to carry out the functions.
              It will first initialize the different pointers I have made for the different shapes to nullptr's. Then, when the run method is called, it will
              make a bunch of data types to take in from the file and will open the file to read it. It then looks at the file size and opens the file to get the function type and index.
              Then, it will look at the type of function it is using and will accordingly carry out that function with the correct shape (in the case of ADD).
              Finally, after the run() has closed, the destructor deletes the pointers and closes.
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/

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
                  std::cout << "Shape at index " << index << ": ";

                  try
                  {
                      std::cout << container->shapeName(index) << "area = " << container->area(index) << '\n';
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
        if(amount < 0)
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
    if(triangle_obj != nullptr)
    {
        delete triangle_obj;
    }
    if(container != nullptr)
    {
        delete container;
    }
}
