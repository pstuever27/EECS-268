#include "Executive.h"
#include <stdlib.h>
#include <time.h>
#include <iomanip>

Executive::Executive()
{
  elements = 1000;
  m_Stack = nullptr;
  m_Queue = new Queue<int>();
  m_List = new List<int>();
}

Executive::~Executive()
{

}

void Executive::Stackpop()
{
  m_Stack = new Stack<int>();
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

  delete m_Stack;

  if(elements < 100000)
  {
  elements = elements + 1000;
  Stackpop();
  }
  if(elements == 100000)
  {
    std::cout << "Stack pop ^^^\n";
    elements = 1000;
  }
}

void Executive::StackDestructor()
{

}
void Executive::Queuedequeue()
{ 
  m_Queue = new Queue<int>();
  
  clock_t start = clock();

  for (int i = 0; i < elements; i++)
  {
    m_Queue->enqueue(i);
  }

  clock_t end = clock();
  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << elements << " is " <<std::setprecision(100) << time_taken << " seconds.\n";

  delete m_Queue;

  if(elements < 100000)
  {
    elements = elements + 1000;
    Queuedequeue();
  }
  if(elements == 100000)
  {
    std::cout << "Queue enqueue ^^^\n";
    elements = 1000;
  }

}
void Executive::Listone()
{
  m_List = new List<int>();

  for(int i = 0 ; i < elements; i++)
  {
    try
    {
      m_List->insert(i, i);    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    
    m_List->insert(i, i);
  }

  clock_t start = clock();
  m_List->getEntry(0);
  clock_t end = clock();

  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << elements << " is " << std::setprecision(100) << time_taken << " seconds.\n";

  if(elements < 100000)
  {
    elements = elements + 1000;
    Listone();
  }
  if(elements == 100000)
  {
    std::cout << "List getEntry at index 0 ^^^\n";
    elements = 1000;
  }


}
void Executive::Listlast()
{
  m_List = new List<int>();

  for (int i = 0; i < elements; i++)
  {
    m_List->insert(i, i);
  }

  clock_t start = clock();
  m_List->getEntry(elements);
  clock_t end = clock();

  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << elements << " is " << std::setprecision(100) << time_taken << " seconds.\n";

  if(elements == 100000)
  {
    std::cout << "List getEntry at last index ^^^\n";
  }
  else if(elements < 100000)
  {
    elements = elements + 1000;
    Listlast();
  }

}
void Executive::Printlist()
{
  m_List = new List<int>();

  for(int i = 0; i < elements; i++)
  {
    m_List->insert(i, i);
  }

  clock_t start = clock();

  for (int i = 0; i < elements; i++)
  {
    std::cout << m_List->getEntry(i);
  }

  clock_t end = clock();

  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << elements << " is " << std::setprecision(100) << time_taken << " seconds.\n";

  if(elements == 100000)
  {
    std::cout << "Print all elements of a list ^^^\n";
  }
  else if(elements < 100000)
  {
    char continuer;
    elements = elements + 1000;
    std::cout << "Enter any character to continue PrintList: ";
    std::cin >> continuer;
    if(continuer == 'p' || continuer == 'P')
    {
      Printlist();
    }
    else
    {
      Printlist();
    }

  }
  
}
