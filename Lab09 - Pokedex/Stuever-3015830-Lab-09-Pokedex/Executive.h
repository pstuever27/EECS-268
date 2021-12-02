/**
 * @file Executive.h
 * @author Paul Stuever
 * @brief Header file for Executive.cpp
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "BST.h"
#include "Pokemon.h"

class Executive{

private:
  BST<Pokemon, int>* m_Tree;
  std::string m_filename;

public:
  /**
   * @pre Requires main to give a filename
   * @post will set m_filename to its value and m_Tree to nullptr
   * @return none
   **/ 
  Executive(std::string filename);

  /**
   * @pre none
   * @post Destructor
   * @return none
   **/ 
  ~Executive();

  /**
   * @pre Requires good filename 
   * @post Prints the menu for the user to interact with and calls other functions
   * @return void
   **/ 
  void menu();

  /**
   * @pre Requires filename
   * @post Opens file and reads the pokemon info into the BST
   * @return void
   **/ 
  void fileFiller();

  /**
   * @pre requires BST to be created
   * @post Searches to find the desired Pokemon
   * @return void
   **/ 
  void search();

  /**
   * @pre Requires BST
   * @post Will call the add function in BST.cpp
   * @return void
   **/ 
  void addEntry();

  /**
   * @pre none
   * @post Prints all pokemon after asking for the desired order
   * @return void
   **/ 
  void print();

  /**
   * @pre none
   * @post Prints a single pokemon
   * @return void
   **/ 
  static void pokemonPrinter(Pokemon p); //prints a single pokemon

};
#endif
