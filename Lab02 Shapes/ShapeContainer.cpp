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
  delete [] m_arrayOfShapes;
}
double ShapeContainer::area(int index) const
{
  if(index >= m_size || m_size = 0)
  {
    throw(std::runtime_error("Index invalid"));
  } else if(index == nullptr)
  {
    throw(std::runtime_error("Index invalid!"));
  }else
  {
  return m_arrayOfShapes[index]->area();
  }

}

std::string ShapeContainer::shapeName(int index) const;
{
  std::string shapeName;
  if(index >= m_size || index < 0)
  {
    throw(std::runtime_error("Index invalid"));
  } else if(index == nullptr)
  {
    throw(std::runtime_error("Index invalid!"));
  }else
  {
  return (m_arrayOfShapes[index]->shapeName())
  }
  
}

void ShapeContainer::add(Shape* shapePtr, int index)
{
  if(index >= m_size || m_size = 0)
  {
    throw(std::runtime_error("Index invalid"));
  } else if(index == nullptr)
  {
    throw(std::runtime_error("Index invalid!"));
  }
    else
    {
    m_arrayOfShapes[index] = shapePtr();
    }
  
}

void ShapeContainer::remove(int index)
{
  if(index >= m_size || m_size = 0)
  {
    throw(std::runtime_error("Index invalid"));
  } else if(index == nullptr)
  {
    throw(std::runtime_error("Index invalid!"));
  }
    else
    {
      m_arrayOfShapes = nullptr;
    }
  
}
