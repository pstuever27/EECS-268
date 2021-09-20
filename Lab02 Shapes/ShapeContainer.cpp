#include "Shapecontainer.h"
#include "shape.h"
#include <iostream>
#include <fstream>
#include <string> 

Shapecontainer::ShapeContainer(int size)
{
    m_size = size;
    m_arrayOfShapes = new Shape* [m_size];
}
Shapecontainer::~ShapeContainer()
{
  delete [] m_arrayOfShapes;
}
double ShapeContainer::area(int index) const;
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
  if(index >= m_size || m_size = 0)
  {
    throw(std::runtime_error("Index invalid"));
  } else if(index == nullptr)
  {
    throw(std::runtime_error("Index invalid!"));
  }else
  {
  return m_arrayOfShapes[index]->shapeName()
  }
  //garbage code
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
  //garbage
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
  //garbage
}
