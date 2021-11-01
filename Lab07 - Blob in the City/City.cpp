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

}

City::~City()
{

}

void City::BlobbifyCity()
{
  Blobbify(m_start_x, m_start_y)
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
  else
  {

  }
}

void City::Blobbify(int start_x, int start_y)
{
  //This will iterate through the city one space at a time to find the blobby path of destruction.
}
