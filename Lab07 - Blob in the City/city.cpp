#include "City.h"
#include <fstream>
#include <iostream>
#include <string>


City::City(std::ifstream& inFile)
{
  char temp;
  m_visited = new int*[m_rows];
  inFile >> m_rows >> m_columns >> m_start_x >> m_start_y;
  m_city = new char*[m_rows];
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


}

City::~City()
{
  for(int i = 0; i<m_rows; i++)
  {
    for(int j = 0; j<m_columns; j++)
    {
      delete[] m_city[j];
    }
    delete[] m_city[i];
  }

  delete[] m_city;
  delete[] m_visited;
}

void City::BlobbifyCity()
{

  if(m_rows < 0 || m_columns < 0)
  {
    throw(std::runtime_error("Invalid Rows/Columns!\n"));
  }
  if(m_start_x > m_rows || m_start_y > m_columns)
  {
    throw(std::runtime_error("Invalid starting point!\n"));
  }

  m_city[m_start_x][m_start_y] = 'B';
  m_visited[m_start_x][m_start_y] = 1;
  Blobbify(m_start_x, m_start_y);
  if(m_is_sewers) //flag that is made in blobbify() that will tell us if there are sewers.
  {
    for(int i=0; i<m_rows; i++)
    {
      for(int j=0; j<m_columns; j++)
      {
        if(m_city[i][j] == '@')
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

      std::cout << "up\n";
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
      else if(m_city[m_x - 1][m_y] == '@' && m_cantmove)
      {
        m_x--;
        m_is_sewers = 1;
        m_city[m_x][m_y] = 'B';
      }
  }


  //Check right
  else if(m_y + 1 < m_columns && m_city[m_x][m_y + 1] != '#' && m_visited[m_x][m_y + 1] != 1)
  {
    std::cout << "right\n";
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
    else if(m_city[m_x][m_y + 1] == '@' && m_cantmove)
    {
      m_y++;
      m_is_sewers = 1;
      m_city[m_x][m_y] = 'B';
    }
  }

  //Check down
  else if(m_x + 1 < m_rows && m_city[m_x + 1][m_y] != '#' && m_visited[m_x + 1][m_y] != 1)
  {
    std::cout << "Down\n";
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
    else if(m_city[m_x + 1][m_y] == '@' && m_cantmove)
    {
      m_x++;
      m_is_sewers = 1;
      m_city[m_x][m_y] = 'B';
    }
    
  }

  //check left
  else if(m_y > 0 && m_city[m_x][m_y - 1] != '#' && m_visited[m_x][m_y - 1] != 1)
  {
    std::cout << "Left\n";
    
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
    else if(m_city[m_x][m_y - 1] == '@' && m_cantmove)
    {
      m_y--;
      m_is_sewers = 1;
      m_city[m_x][m_y] = 'B';
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
  for(int i = 0; i<m_rows; i++)
  {
    for(int j = 0; j<m_columns; j++)
    {
      std::cout << m_city[i][j];
    }
    std::cout << '\n';
  }
  std::cout << '\n';

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

  for(int i = 0; i<m_rows; i++)
  {
    for(int j = 0; j<m_columns; j++)
    {
      std::cout << m_visited[i][j];
    }
    std::cout << '\n';
  }
}
