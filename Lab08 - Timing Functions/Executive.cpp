#include "Executive.h"
#include <stdlib.h>
#include <time.h>
#include <iomanip>

Executive::Executive()
{
  elements = 1000;
  m_Stack = new Stack<int>();
  m_Queue = new Queue<int>();
  m_List = new List<int>();
}

Executive::~Executive()
{

}

void Executive::Stackpop()
{
  for(int i = 0; i < elements; i++)
  {
    m_Stack->push(i);
  }
  clock_t start = clock();
  m_Stack->pop();
  clock_t end = clock();
  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << elements << " is " << std::setprecision(100) << time_taken << " seconds.\n";
  if(elements < 100000)
  {
  elements = elements + 1000;
  Stackpop();
  }
}

void Executive::StackDestructor()
{

}
void Executive::Queuedequeue()
{

}
void Executive::Listone()
{

}
void Executive::Listlast()
{

}
void Executive::Printlist()
{

}
