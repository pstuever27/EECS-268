#include "City.h"
#include <fstream>

City::City(std::ifstream& inFile)
{
  char temp;
  infile >> m_rows >> m_columns >> m_start_x >> m_start_y;
  m_city = new char*[m_rows];
  for(int i = 0; i<m_rows; i++)
  {
    m_city[i] = new char[m_columns];
  }
  for(int i=0; i<m_rows; i++)
  {
    for(int j=0; j<m_columns; j++)
    {
      inFile >> std::noskipws >> temp;

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
  m_x = m_start_x;
  m_y = m_start_y;
}

City::~City()
{

}

void City::BlobbifyCity()
{
  Blobbify(m_start_x, m_start_y);
  if(m_is_sewers) //flag that is made in blobbify() that will tell us if there are sewers.
  {
    for(int i=0; i<m_rows; i++)
    {
      for(int j=0; j<m_columns; j++)
      {
        if(m_ciy[i][j] == '@')
        {
          Blobbify(i, j);
        }
      }
    }
  }
}

void City::Blobbify(int start_x, int start_y)
{
  //check up
  if(m_city[m_x + 1][m_y] != '#' || m_city[m_x + 1][m_y] != 'B')
  {
    if(m_city[m_x + 1][m_y] == 'S')
    {
      m_x++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x + 1][m_y] == 'P')
    {
      m_x++;
      m_eaten++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x + 1][m_y] == '@' && m_cantmove)
    {
      m_x++;
      m_is_sewers = 1;
      m_city[m_x][m_y] == 'B';
    }
  }

  //Check right
  else if(m_city[m_x][m_y + 1] != '#' || m_city[m_x][m_y + 1] != 'B')
  {
    if(m_city[m_x][m_y + 1] == 'S')
    {
      m_y++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x][m_y + 1] == 'P')
    {
      m_y++;
      m_eaten++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x][m_y + 1] == '@' && m_cantmove)
    {
      m_y++;
      m_is_sewers = 1;
      m_city[m_x][m_y] == 'B';
    }
  }
  
  //Check down
  else if(m_city[m_x - 1][m_y] != '#' || m_city[m_x - 1][m_y] != 'B')
  {
    if(m_city[m_x - 1][m_y] == 'S')
    {
      m_y++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x - 1][m_y] == 'P')
    {
      m_y++;
      m_eaten++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x - 1][m_y] == '@' && m_cantmove)
    {
      m_x--;
      m_is_sewers = 1;
      m_city[m_x][m_y] == 'B';
    }
  }
  else if(m_city[m_x][m_y - 1] != '#' || m_city[m_x][m_y - 1] != 'B')
  {
    if(m_city[m_x][m_y - 1] == 'S')
    {
      m_y++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x][m_y - 1] == 'P')
    {
      m_y++;
      m_eaten++;
      m_city[m_x][m_y] == 'B';
      Blobbify(m_x, m_y);
    }
    if(m_city[m_x][m_y - 1] == '@' && m_cantmove)
    {
      m_y--;
      m_is_sewers = 1;
      m_city[m_x][m_y] == 'B';
    }
  }

  else{
    m_cantmove = 1;
    

  }
}

void City::print()
{
  for(int i = 0; i<m_rows; i++)
  {
    std::cout << '\n';
    for(int j = 0; i<m_columns; j++)
    {
      std::cout << m_city[i][j];
    }
  }
  std::cout << "Total Eaten: " << m_eaten << '\n';
}
