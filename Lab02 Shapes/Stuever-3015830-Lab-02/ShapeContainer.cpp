/** -----------------------------------------------------------------------------
 *
 * @file: ShapeContainer.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: This file will initialize m_arrayOfShapes to another shape pointer with size [m_size] and will set the m_size to the passed in size beforehand.
            Then, it has the different operations needed for the function (area, add, delete, and shapename) and will 
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#include "ShapeContainer.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
#include <iostream>


ShapeContainer::ShapeContainer(int size)
{
    m_size = size;
    m_arrayOfShapes = nullptr;

    if (size > 0)
    {
        m_arrayOfShapes = new Shape* [m_size];
    }
}
ShapeContainer::~ShapeContainer()
{
  for(int i = 0; i<m_size; i++)
  {
    m_arrayOfShapes[i] = nullptr;
  }
  if(m_arrayOfShapes != nullptr)
  {
    delete[] m_arrayOfShapes;
  }

}

double ShapeContainer::area(int index) const
{
  if(m_arrayOfShapes[index] == nullptr)
  {
    throw(std::runtime_error("No shape in that index!"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("index out of range!"));
  }else
  {
  return (m_arrayOfShapes[index]->area());
  }

}

std::string ShapeContainer::shapeName(int index) const
{
  if(m_arrayOfShapes[index] == nullptr)
  {
    throw(std::runtime_error("No shape in that Index!"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("Index out of range!"));
  }else
  {
  return (m_arrayOfShapes[index]->shapeName());
  }

}

void ShapeContainer::add(Shape* shapePtr, int index)
{
  if(shapePtr == nullptr)
  {
    throw(std::runtime_error("Can't add a null shape!"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("Index out of range!"));
  }
    else
    {
      m_arrayOfShapes[index] = shapePtr;
    }

}

void ShapeContainer::remove(int index)
{
  if(m_arrayOfShapes[index] == nullptr)
  {
    throw(std::runtime_error("No shape in index!"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("Index out of range!"));
  }
    else
    {
      m_arrayOfShapes[index] = nullptr;
    }

}
