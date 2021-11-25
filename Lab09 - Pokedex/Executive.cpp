#include "Executive.h"
#include "Pokemon.h"
#include <fstream>
#include <string>
#include <iostream>

Executive::Executive(std::string filename)
{
  m_Poke = nullptr;
  m_Tree = nullptr;
  m_filename = filename;
}

Executive::~Executive()
{
  m_Poke = nullptr;
  m_Tree = nullptr;

  delete[] m_Poke;
  delete[] m_Tree;
}

void fileFiller()
{
  std::ifstream inFile;
  inFile.open(m_filename);
  m_Poke = new Pokemon();
  m_Tree = new BST<Pokemon, int>();
  std::string temp_AmName, temp_JapanName;
  int temp_number;
  if(inFile.is_open())
  {
    while(inFile >> temp_AmName >> temp_number >> temp_JapanName)
    {
      m_Poke->setAmName(temp_AmName);
      m_Poke->setJapanName(temp_JapanName);
      m_Poke->setNumber(temp_number);
      m_Tree->add(m_Poke);
    }
  }
  else
  {
    std::cout << "Invalid filename!\n";
  }
}