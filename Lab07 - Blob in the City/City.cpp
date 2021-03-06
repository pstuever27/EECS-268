/**
 * @name Paul Stuever
 * @Filename 
 * @assignment EECS268 - Lab07 - Blob in the city!
 * @Description
 * @date 11/03/2021
 **/

#include "City.h"
#include <fstream>
#include <iostream>
#include <string>


City::City(std::ifstream& inFile)
{
  char temp;
  inFile >> m_rows >> m_columns >> m_start_x >> m_start_y;
  
  if(m_rows < 1 || m_columns < 1)
  {
    throw(std::runtime_error("Invalid Rows/Columns!\n"));
  }

  if(m_start_x + 1 > m_rows || m_start_y + 1 > m_columns)
  {
    throw(std::runtime_error("Invalid Starting Position!\n"));
  }

  m_city = new char* [m_rows];
  m_visited = new int* [m_rows];

  m_eaten = 0;

  for(int i = 0; i<m_rows; i++)
  {
    m_city[i] = new char[m_columns];
    m_visited[i] = new int[m_columns];
  }

  for(int i=0; i<m_rows; i++)
  {

    for(int j=0; j<m_columns; j++)
    {

      inFile >> temp;

      if(temp != '\n')
      {
        m_city[i][j] = temp;
      }
      else
      {
        inFile >> std::noskipws >> temp;
        m_city[i][j] = temp;
      }

    }
  }

  for(int i=0; i<m_rows;i++)
  {
    for(int j=0; j<m_columns; j++)
    {
      m_visited[i][j] = 0;
    }
  }


  if(m_city[m_start_x][m_start_y] == '#')
  {
    throw(std::runtime_error("Cannot start maze on a building!\n"));
  }
  
  m_x = m_start_x;
  m_y = m_start_y;


}

City::~City()
{
  for(int i = 0; i<m_rows; i++)
  {
   delete[] m_city[i];
   delete[] m_visited[i];
  }

  delete m_city;
  delete m_visited;

}

void City::BlobbifyCity()
{

  m_city[m_start_x][m_start_y] = 'B';
  m_visited[m_start_x][m_start_y] = 1;
  if(!m_is_sewers)
  {
     Blobbify(m_x, m_y);
  }
 
  if(m_is_sewers) //flag that is made in blobbify() that will tell us if there are sewers.
  {
    for(int i=0; i<m_rows; i++)
    {
      for(int j=0; j<m_columns; j++)
      {
        if(m_city[i][j] == '@' && m_visited[i][j] != 1)
        {
          Blobbify(i, j);
        }
      }
    }
  }
}


void City::Blobbify(int& start_x, int& start_y)
{
  //check up
  m_x = start_x;
  m_y = start_y;

  if(m_x > 0 && m_city[m_x - 1][m_y] != '#' && m_visited[m_x - 1][m_y] != 1)
  {
      if(m_city[m_x - 1][m_y] == 'S')
      {
        m_x--;
        m_city[m_x][m_y] = 'B';
        m_visited[m_x][m_y] = 1;
        Blobbify(m_x, m_y);
      }
      else if(m_city[m_x - 1][m_y] == 'P')
      {
        m_x--;
        m_eaten++;
        m_visited[m_x][m_y] = 1;
        m_city[m_x][m_y] = 'B';
        Blobbify(m_x, m_y);
      }
      else if(m_city[m_x - 1][m_y] == '@')
      {
        m_x--;
        m_is_sewers = 1;
        m_visited[m_x][m_y] = 1;
        m_cantmove = 0;
      }
  }


  //Check right
  else if(m_y + 1 < m_columns && m_visited[m_x][m_y + 1] != 1 && m_city[m_x][m_y + 1] != '#')
  {

    if(m_city[m_x][m_y + 1] == 'S')
    {
      m_y++;
      m_city[m_x][m_y] = 'B';
      m_visited[m_x][m_y] = 1;
      Blobbify(m_x, m_y);
    }
    else if(m_city[m_x][m_y + 1] == 'P')
    {
      m_y++;
      m_eaten++;
      m_city[m_x][m_y] = 'B';
      m_visited[m_x][m_y] = 1;
      Blobbify(m_x, m_y);
    }
    else if(m_city[m_x][m_y + 1] == '@' && m_visited[m_x][m_y + 1] != 1)
    {
      m_y++;
      m_is_sewers = 1;
      m_visited[m_x][m_y] = 1;
      
    }
  }

  //Check down
  else if(m_x + 1 < m_rows && m_city[m_x + 1][m_y] != '#' && m_visited[m_x + 1][m_y] != 1)
  {

    if(m_city[m_x + 1][m_y] == 'S')
    {
      m_x++;
      m_city[m_x][m_y] = 'B';
      m_visited[m_x][m_y] = 1;
      Blobbify(m_x, m_y);
    }
    else if(m_city[m_x + 1][m_y] == 'P')
    {
      m_x++;
      m_eaten++;
      m_city[m_x][m_y] = 'B';
      m_visited[m_x][m_y] = 1;
      Blobbify(m_x, m_y);
    }
    else if(m_city[m_x + 1][m_y] == '@')
    {
      m_x++;
      m_is_sewers = 1;
      m_visited[m_x][m_y] = 1;
    }
    
  }

  //check left
  else if(m_y > 0 && m_city[m_x][m_y - 1] != '#' && m_visited[m_x][m_y - 1] != 1)
  {
    
    if(m_city[m_x][m_y - 1] == 'S')
    {
      m_y--;
      m_city[m_x][m_y] = 'B';
      m_visited[m_x][m_y] = 1;
      Blobbify(m_x, m_y);
    }
    else if(m_city[m_x][m_y - 1] == 'P')
    {
      m_y--;
      m_eaten++;
      m_city[m_x][m_y] = 'B';
      m_visited[m_x][m_y] = 1;
      Blobbify(m_x, m_y);
    }
    else if(m_city[m_x][m_y - 1] == '@')
    {
      m_y--;
      m_is_sewers = 1;
      m_visited[m_x][m_y] = 1;
    }
  }
  else if(m_cantmove == 0)
  {
    m_cantmove = 1;
    for(int i = 0; i<m_rows; i++)
    {
      for(int j = 0; j<m_columns; j++)
      {
        if(m_visited[i][j] == 1)
        {
          Blobbify(i, j);
        }
      }
    }
  }
  
}



void City::printBefore()
{
  std::cout << "-------Before Blobbening-------\n";
  for(int i = 0; i<m_rows; i++)
  {
    for(int j = 0; j<m_columns; j++)
    {
      std::cout << m_city[i][j];
    }
    std::cout << '\n';
  }
  std::cout << "\n-------After Blobbening--------\n";

}

void City::printAfter()
{
  for(int i = 0; i<m_rows; i++)
  {
    for(int j = 0; j<m_columns; j++)
    {
      std::cout << m_city[i][j];
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  std::cout << "Total Eaten: " << m_eaten << '\n';

}
