#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "BST.h"
#inlcude "Pokemon.h"

class Executive{

private:
  Pokemon* m_Poke;
  BST<Pokemon, int>* m_Tree;
  std::string m_filename;

public:
  Executive();
  ~Executive();
  void fileFiller();
  void search();
  void addEntry();
  void print();
  static void pokemonPrinter(Pokemon p); //prints a single pokemon

};
#endif

/**
*GAME PLAN: take in all the info from the file and put it into a pokemon object, then add that object to the BST
  -When the pokemon is searched, the pokemon object will have getters and setters for each of the data values (name, number, japanese name)
  -Then, when a number is searched, it will search the BST by using getters to find the specific number
  -Same type of thing when printing or adding, will use the pokemon object to store info.
*
**/
