/*
Name: Paul Stuever
Filename: menu.h
Description: This file creates the methods that will be used to interact with the user.
  It also makes a gamerecords pointer object that will allow the information to be stored.
*/

#ifndef MENU_H
#define MENU_H
#include "gamerecords.h"
#include <iostream>

class Menu
{
public:

  //Making a gamerecords pointer that will put all the information into essentially an array
    gamerecords* records = nullptr;

    //Making methods
    int readfile(std::string fileName);

    //a little destructor guy
    ~Menu();

    void printgames(int size);
    void printyear(int size);
    void printRR(int size);
    void PplVsGibbo(int size);
    void playtime(int size);
    int printmenu();
    void run(std::string fileName);

};
#endif
