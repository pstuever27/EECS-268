/*
Name: Paul Stuever
Filename: gamerecords.h
Description: This file creates the methods and member vars that will be used to store the information from the input file.
*/

#ifndef GAMERECORDS_H
#define GAMERECORDS_H
#include <iostream>

class gamerecords
{
private:

  // creating member vars

  std::string m_gamename;
  double m_gibbons;
  double m_ppl;
  int m_year;
  int m_minplayers;
  double m_playtime;

public:

  //making getters and setters for later

  void setgamename(std::string gamename);
  void setGibbons(double Gibbons);
  void setppl(double ppl);
  void setyear(int year);
  void setminplayers(int minplayers);
  void setplaytime(int playtime);

  std::string getgamename();
  double getGibbons();
  double getppl();
  int getyear();
  int getminplayers();
  double getplaytime();

};
#endif
