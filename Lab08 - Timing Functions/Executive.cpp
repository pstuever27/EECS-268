/**
 * @file Executive.cpp
 * @author Paul Stuever
 * @brief This lab will implement the different functions of the data structures we have created and use the time.h library to time them and give us the data for each one.
 * @assignment EECS268 Lab08 - Timing 
 * @date 2021-11-17
 * 
 */

#include "Executive.h"
#include <stdlib.h>
#include <time.h>
#include <iomanip>

Executive::Executive()
{
  elements = 1000;
  list_elements = 0;
  fill_time = 0;
  m_Stack = nullptr;
  m_Queue = new Queue<int>();
  m_List = new List<int>();
  timer = new List<float>();
}

Executive::~Executive()
{
  m_Stack = nullptr;
  delete[] m_Stack;

  m_Queue = nullptr;
  delete[] m_Queue;

  m_List = nullptr;
  delete[] m_List;

  timer = nullptr;
  delete[] timer;

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
  m_Stack = nullptr;
}

void Executive::StackDestructor()
{
  m_Stack = new Stack<int>();
  for(int i = 0; i<elements; i++)
  {
    m_Stack->push(i);
  }

  clock_t start = clock();
  delete m_Stack;
  clock_t end = clock();

  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << elements << " is " << std::setprecision(100) << time_taken << " seconds.\n";

   if(elements < 100000)
  {
  elements = elements + 1000;
  StackDestructor();
  }
  if(elements == 100000)
  {
    std::cout << "Stack destructor ^^^\n";
    elements = 1000;
  }
  m_Stack = nullptr;
}
void Executive::Queuedequeue()
{ 
  
  clock_t start = clock();

  for (int i = 0; i < elements; i++)
  {
    m_Queue->enqueue(i);
  }

  clock_t end = clock();
  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << elements << " is " <<std::setprecision(100) << time_taken << " seconds.\n";

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
  for(int i = list_elements ; i < 1000; i++)
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
  std::cout << "Time taken at " << list_elements << " is " << std::setprecision(500) << time_taken << " seconds.\n";

  if(list_elements < 100000)
  {
    list_elements = list_elements + 1000;
    Listone();
  }
  else
  {
    std::cout << "List getEntry at index 0 ^^^\n";
    list_elements = 1000;
  }

  list_elements = 0;
}
void Executive::Listlast()
{

  for (int i = 0; i < 1000; i++)
  {
    m_List->insert(list_elements, i);
    list_elements++;
  }

  clock_t start = clock();
  m_List->getEntry(list_elements-1);
  clock_t end = clock();

  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;
  std::cout << "Time taken at " << list_elements << " is " << std::setprecision(1000) << time_taken << " seconds.\n";

  
  if(list_elements != 100000)
  {
    Listlast();
  }
  else
  {
    std::cout << "List getEntry at last index ^^^\n";
  }
  list_elements = 0;
}
void Executive::Printlist()
{

  for(int i = 0; i < 1000; i++)
  {
    m_List->insert(list_elements, elements);
    list_elements++;
    elements++;
  }


  clock_t start = clock();

  for (int i = 0; i < list_elements; i++)
  {
    std::cout << '\n' << m_List->getEntry(i);
  }

  clocint k_t end = clock();

  float t = end - start;
  float time_taken = double(t)/CLOCKS_PER_SEC;

  timer->insert(fill_time, time_taken);
  fill_time++;

  if(list_elements == 100000)
  {
    list_elements = 1000;
    for(int i = 0; i<fill_time; i++)
    {
      std::cout << "Time taken at " << list_elements << " is " << timer->getEntry(i) << "seconds.\n";
      list_elements = list_elements + 1000;
    }
    std::cout << "Print all elements of a list ^^^\n";
  }
  else
  {
    Printlist();
  }
  
}
