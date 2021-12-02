/**
 * @file Pokemon.cpp
 * @author Paul Stuever
 * @brief Makes the Pomeon class to use for storing information to later pull out of the BST
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#include "Pokemon.h"
#include <string>

Pokemon::Pokemon()
{}


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

  bool Pokemon::operator>(Pokemon rhs)
  {
    return(m_number > rhs.getNumber());
  }

  bool Pokemon::operator<(Pokemon rhs)
  {
    return(m_number < rhs.getNumber());
  }

  bool Pokemon::operator==(Pokemon rhs)
  {
    return(m_number == rhs.getNumber());
  }

  bool Pokemon::operator==(int rhs)
  {
    return(m_number == rhs);
  }

  bool Pokemon::operator<(int rhs)
  {
    return(m_number < rhs);
  }

  bool Pokemon::operator>(int rhs)
  {
    return(m_number > rhs);
  }
