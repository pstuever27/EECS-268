#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string>

class Pokemon
{
private:
  string m_AmericanName;
  string m_JapaneseName;
  int m_number;

public:
  void setAmName(std::string name);
  void setJapanName(std::string name);
  void setNumber(int number);
  std::string getAmName();
  std::string getJapanName();
  int getNumber();
  bool operator>(Pokemon rhs);
  bool operator<(Pokemon rhs);
  bool operator==(Pokemon rhs);
  bool operator==(int rhs);
  bool operator<(int rhs);
  bool operator>(int rhs);
};
#endif
