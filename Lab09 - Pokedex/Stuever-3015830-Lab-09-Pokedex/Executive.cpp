/**
 * @file Executive.cpp
 * @author Paul Stuever
 * @brief Executive file that will take in the information from the file, present the user with a menu, and allow them to do various functions with the BST
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#include "Executive.h"
#include "Pokemon.h"
#include "BST.h"
#include <fstream>
#include <string>
#include <iostream>

Executive::Executive(std::string filename)
{
  m_Tree = new BST<Pokemon, int>();
  m_filename = filename;
}

Executive::~Executive()
{
  m_Tree = nullptr;
  delete[] m_Tree;
}

void Executive::menu()
{
  int choice;
  fileFiller();
  while(choice != 4)
  {
    std::cout << "------------POKEDEX------------\n1)Search for a Pokemon!\n2)Add a Pokemon!\n3)Print all Pokemon!\n4)Exit\nChoice: ";
    std::cin >> choice;
    if(choice == 1)
    {
      search();
    }
    else if(choice == 2)
    {
      addEntry();
    }
    else if(choice == 3)
    {
      print();
    }
  }
}

void Executive::fileFiller()
{
  std::ifstream inFile;
  inFile.open(m_filename);
  std::string temp_AmName, temp_JapanName;
  int temp_number;
  if(inFile.is_open())
  {
    while(inFile.is_open())
    {
      
      Pokemon m_Poke;
      while(inFile >> temp_AmName >> temp_number >> temp_JapanName)
      {
        m_Poke.setAmName(temp_AmName);
        m_Poke.setJapanName(temp_JapanName);
        m_Poke.setNumber(temp_number);
        m_Tree->add(m_Poke);
      }
      inFile.close();
    }
  }
  else
  {
    std::cout << "Invalid filename!\n";
  }
}

void Executive::addEntry()
{
  std::string USName, JPNName;
  int number;
  std::cout << "\n-------Add a Pokemon!-------\nAmerican Name: ";
  std::cin >> USName;
  std::cout << "Pokedex Number: ";
  std::cin >> number;
  std::cout << "Japanese Name: ";
  std::cin >> JPNName;
  std::cout << "Checking for duplicates...\n";
  Pokemon Poke;
  Poke.setAmName(USName);
  Poke.setNumber(number);
  Poke.setJapanName(JPNName);
  try
  {
    m_Tree->add(Poke);  
    std::cout << "Pokemon added!\n";
  }
  catch(const std::exception& e)
  {
    std::cout << "Duplicate detected! Pokemon not added!\n";
  }
}

void Executive::search()
{
  int number;
  std::cout << "\nWhat Pokedex number would you like to search for?: ";
  std::cin >> number;
  Pokemon m_Poke;
  try
  {
    m_Poke = m_Tree->search(number);
  
  }
  catch(const std::exception& e)
  {
    std::cout << "Pokemon not found!\n";
  }
}

void Executive::print()
{
   int choiceTwo;
        std::cout << "-------What Order?-------\n1)Pre-Order\n2)In-Order\n3)Post-Order\n";
        std::cin >> choiceTwo;
        if(choiceTwo == 1)
        {
          std::cout << "\nUS Name     Number     Japanese Name\n------------------------------\n";
          m_Tree->visitPreOrder(pokemonPrinter);
        }
        if(choiceTwo == 2)
        {
          std::cout << "\nUS Name     Number     Japanese Name\n------------------------------\n";
          m_Tree->visitInOrder(pokemonPrinter);
        }
        if(choiceTwo == 3)
        {
          std::cout << "\nUS Name     Number     Japanese Name\n------------------------------\n";
          m_Tree->visitPostOrder(pokemonPrinter);
        }
}

void Executive::pokemonPrinter(Pokemon p)
{
  std::string USName, JPNName;
  int number;

  USName = p.getAmName();
  JPNName = p.getJapanName();
  number = p.getNumber();

  std::cout << USName << " " << number << " " << JPNName << '\n';
}
