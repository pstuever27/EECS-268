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
        m_arrayOfShapes = new Shape * [m_size];
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
    throw(std::runtime_error("No shape in that index!\n"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("index out of range!\n"));
  }else
  {
  return (m_arrayOfShapes[index]->area());
  }

}

std::string ShapeContainer::shapeName(int index) const
{
  if(m_arrayOfShapes[index] == nullptr)
  {
    throw(std::runtime_error("No shape in that Index!\n"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("Index out of range!\n"));
  }else
  {
  return (m_arrayOfShapes[index]->shapeName());
  }
  
}

void ShapeContainer::add(Shape* shapePtr, int index)
{
  if(shapePtr == nullptr)
  {
    throw(std::runtime_error("Can't add a null shape!\n"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("Index out of range!\n"));
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
    throw(std::runtime_error("No shape in index!\n"));
  } else if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("Index out of range!\n"));
  }
    else
    {
      m_arrayOfShapes = nullptr;
    }
  
}
