/**
 * @name Paul Stuever
 * @Filename City.h
 * @assignment EECS268 - Lab07 - Blob in the city!
 * @Description This is the header file for City.cpp, which runs all the algorithms to find the path through the city and spread.
 * @date 11/03/2021
 **/

#ifndef CITY_H
#define CITY_H
#include <string>
#include <fstream>

class City
{
public:

  /**
   * @pre This requires that the filename is vaild, which is checked by main.cpp
   * @post Will setup the two arrays that we will need for Blobbify. First, it will take in the nesseccary info from the file. Then, it will 
   *    build m_city as written in the file, as well as make m_visited of the same size, which will let us know if we have been there before.
   *    It will also throw runtime errors for applicable bad inputs from the file. 
   * @return none, constructor
   **/ 
  City(std::ifstream& inFile);

  /**
   * @description Destructor. Will delete the arrays by row, then will delete it altogether to avoid memory leaks.
   **/ 
  ~City();

  /**
   * @pre Requires the input from the file to be good (no errors)
   * @post will print out the initial m_city array before the blob
   * @return none, void
   **/ 
  void printBefore();

  /**
   * @pre Blobbifycity must have finished and the blob must be done moving
   * @post Will print m_city after the blob has spread
   * @return void
   **/ 
  void printAfter();
  
  /**
   * @pre Input from file must be good (no errors)
   * @post Will run Blobbify and, if the need arises, will look for other sewers in the city to travel to.
   * @return void
   **/ 
  void BlobbifyCity();

  //recursive function that will iterate through the city.
  /**
   * @pre Requires m_city to be created from file
   * @post Will recursivley run to test different directions algorithmically to find the next place to spread. I programmed it to 
   *    first go through the city as far as it can using the base algorithm. Then, if it reaches an end, it will look at each spot it has been to 
   *    in order to find if there are any more places to move around those spots. I did this by using m_visited, which is full of binary (0 for unvisited, 1 for visited).
   *    However, if there is nowhere else to go, it will stop UNLESS there is a sewer. In this case it will look to see if there are any other sewers that haven't been 
   *    visited yet. If so, it will go there and continue.
   * @return void
   **/ 
  void Blobbify(int& start_x, int& start_y);


private:
  char** m_city;
  int** m_visited;
  int m_start_x;
  int m_start_y;
  int m_rows;
  int m_columns;
  bool m_is_sewers;
  int m_eaten;
  int m_x, m_y;
  bool m_cantmove;

};
#endif
