/*Name: Paul Stuever
Filename: menu.cpp
Description: This file defines the methods that will allow the user to choose and view certain information from the input file.
  Also, this will take in the information from the file and use gamerecords.h to store them in member vars
*/

#include <iostream>
#include <fstream>
#include <string>
#include "menu.h"

//Takes in the filename from run and will open it and check for good open.
  //Then, it'll put all the info into temp vars and use setters to set the member vars.
int Menu::readfile(std::string fileName)
{
      int size;
      std::ifstream inFile;
      inFile.open(fileName);


      if(inFile.is_open())
      {
        inFile >> size;

        records = new gamerecords[size];

        for(int i = 0; i<size; i++)
        {
          std::string gamename;
          double gibbons;
          double ppl;
          int year;
          int minplayers;
          double playtime;

          inFile >> gamename >> gibbons >> ppl >> year >> minplayers >> playtime;

              records[i].setgamename(gamename);
              records[i].setGibbons(gibbons);
              records[i].setppl(ppl);
              records[i].setyear(year);
              records[i].setminplayers(minplayers);
              records[i].setplaytime(playtime);
          }
          inFile.close();
          return(size);
      }
      else
      {
        std::cout << "Invalid Input!\n";
        return(0);
      }
}


//Destructor
Menu::~Menu()
{
  delete[] records;
}

//This takes in the size and will call the getters in gamerecords.h to display the information.
void Menu::printgames(int size)
{
  for(int i = 0; i<size; i++)
  {
    std::cout << records[i].getgamename() << " (" << records[i].getyear() << ") [GR=" << records[i].getGibbons() << ", PR=" << records[i].getppl() << ", MP=" << records[i].getminplayers() << ", MT=" << records[i].getplaytime() << "]\n";

  }
}

//This takes in a year to search from the user and will print all the games from that year.
  //Checks for no games found
void Menu::printyear(int size)
{
  int year;
  std::cout << "Input a year to search from: ";
  std::cin >> year;
  bool found = 0;
  for(int i = 0; i<size; i++)
  {
    if(records[i].getyear() == year)
    {
      std::cout << records[i].getgamename() << " (" << records[i].getyear() << ") [GR=" << records[i].getGibbons() << ", PR=" << records[i].getppl() << ", MP=" << records[i].getminplayers() << ", MT=" << records[i].getplaytime() << "]\n";
      found = 1;
    }
  }
  if(found == 0)
  {
    std::cout << "No games found!\n";
  }
}

//This will take in the size, then ask the user to input 2 bounds of ratings to search from.
  //Then, it'll simply output anything between those ranges.
    //Also checks for no games found
void Menu::printRR(int size)
{
  double lowrange;
  double highrange;
  std::cout << "Input lower bound of range (can be double): ";
  std::cin >> lowrange;
  std::cout << "Input upper bound of range (can be double): ";
  std::cin >> highrange;
  bool found = 0;

  for(int i = 0; i<size; i++)
  {
    if(lowrange <= records[i].getGibbons() && records[i].getGibbons()<=highrange)
    {
      std::cout << records[i].getgamename() << " (" << records[i].getyear() << ") [GR=" << records[i].getGibbons() << ", PR=" << records[i].getppl() << ", MP=" << records[i].getminplayers() << ", MT=" << records[i].getplaytime() << "]\n";
      found = 1;
    }
  }
  if(found == 0)
  {
    std::cout << "No games found!\n";
  }
}

//This will take in the size of the file and ask the user for a bound to searh for.
  //Then, it'll take the difference (both ways) of the ratings from the ppl and Gibbons.
    //Finally, it'll print all the games that meet that deficit. Checks for no games found
void Menu::PplVsGibbo(int size)
{
  double range;
  double gibbons;
  double people;
  double pplvsgibbo;
  double gibbovsppl;
  bool found = 0;
  std::cout << "---------It's time for...THE PEOPLE VS JWGIBBO@KU.EDU!---------\nInput a range to begin: ";
  std::cin >> range;
  for(int i = 0; i<size; i++)
  {
    people = records[i].getppl();
    gibbons = records[i].getGibbons();
    pplvsgibbo = people - gibbons;
    gibbovsppl = gibbons - people;
    if(pplvsgibbo >= range || gibbovsppl >= range)
    {
      std::cout << records[i].getgamename() << " (" << records[i].getyear() << ") [GR=" << records[i].getGibbons() << ", PR=" << records[i].getppl() << ", MP=" << records[i].getminplayers() << ", MT=" << records[i].getplaytime() << "]\n";
      found = 1;
    }
  }
  if(found == 0)
  {
    std::cout << "No games found!\n";
  }
}


//Will take in the size and will ask the user for a max playtime they would like to set.
  //Then, it will put out all the games that are below that max playtime with a for loop and if statement.
    //(Checks for no games found)
void Menu::playtime(int size)
{
  int time;
  std::cout << "Input a max playtime (in minutes): ";
  std::cin >> time;
  bool found = 0;
  for(int i = 0; i<size; i++)
  {
    if(records[i].getplaytime()<=time)
    {
      std::cout << records[i].getgamename() << " (" << records[i].getyear() << ") [GR=" << records[i].getGibbons() << ", PR=" << records[i].getppl() << ", MP=" << records[i].getminplayers() << ", MT=" << records[i].getplaytime() << "]\n";
      found = 1;
    }
  }
  if(found == 0)
  {
    std::cout << "No games found!\n";
  }
}

//Prints menu. Mic Drop.
int Menu::printmenu()
{
  int choice = 0;
  std::cout << "------------------------\nSelect an option:\n1) Print all games\n2) Print all games from a year\n3) Find games in a ranking range\n4) People vs JWGibbo\n5) Print by playtime\n6) Exit\nEnter your choice: ";
  std::cin >> choice;
  std::cout << "------------------------\n";
  return(choice);
}

//Menu::run will take in the filename and get the size of the file from readfile.
  //Then, it will ask for a choice from the user and loop till exit. Also checks for bad inputs.
void Menu::run(std::string fileName)
{
  int size;
  size = readfile(fileName);

  if(size>0)
  {
    int choice = 0;
    do
    {

      choice = printmenu();

        if(choice == 1)
        {
          printgames(size);
        }
        if(choice == 2)
        {
          printyear(size);
        }
        if(choice == 3)
        {
          printRR(size);
        }
        if(choice == 4)
        {
          PplVsGibbo(size);
        }
        if(choice == 5)
        {
          playtime(size);
        }
        if(choice<=0 || choice>=7)
        {
          std::cout << "Invalid Input!\n";
        }
      }
    while(choice != 6);
  }
}
