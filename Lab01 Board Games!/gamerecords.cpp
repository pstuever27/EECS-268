/*
Name: Paul Stuever
Filename: gamerecords.cpp
Description: This file defines the getters and setters made by gamerecords.h that will later be used to input and output file information.
*/

#include "gamerecords.h"
#include <iostream>

    //writing setters that will take in a variable and set the member vars
    void gamerecords::setgamename(std::string gamename)
    {
      m_gamename = gamename;
    }
    void gamerecords::setGibbons(double Gibbons)
    {
      m_gibbons = Gibbons;
    }
    void gamerecords::setppl(double ppl)
    {
      m_ppl = ppl;
    }
    void gamerecords::setyear(int year)
    {
      m_year = year;
    }
    void gamerecords::setminplayers(int minplayers)
    {
      m_minplayers = minplayers;
    }
    void gamerecords::setplaytime(int playtime)
    {
      m_playtime = playtime;
    }

    //getters that will return the member variables
    std::string gamerecords::getgamename()
    {
      return(m_gamename);
    }
    double gamerecords::getGibbons()
    {
      return(m_gibbons);
    }
    double gamerecords::getppl()
    {
      return(m_ppl);
    }
    int gamerecords::getyear()
    {
      return(m_year);
    }
    int gamerecords::getminplayers()
    {
      return(m_minplayers);
    }
    double gamerecords::getplaytime()
    {
      return(m_playtime);
    }
