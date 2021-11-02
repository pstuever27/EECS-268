#ifndef CITY_H
#define CITY_H
#include <string>
#include <fstream>

class City
{
public:
  City(std::ifstream& inFile);

  ~City();

  void printBefore();
  void printAfter();
  //covers all applicable titles with blobs [B]
  //the city array will be modified, as all applicable tiles will be B
  void BlobbifyCity();

  //recursive function that will iterate through the city.
  void Blobbify(int start_x, int start_y);

  //function that will backtrace through the city

private:
  char** m_city;
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
