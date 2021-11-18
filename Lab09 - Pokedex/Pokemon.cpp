#include "Pokemon.h"
#include <string>

void Pokemon::setAmName(std::string name)
{
  m_AmericanName = name;
}

void Pokemon::setJapanName(std::string name)
{
  m_JapaneseName = name;
}

void Pokemon::setNumber(int number)
{
  m_number = number;
}

std::string Pokemon::getAmName()
{
    return(m_AmericanName);
}

std::string Pokemon::getJapanName()
{
  return(m_JapaneseName);
}

int Pokemon::getNumber()
{
  return(m_number);
}
