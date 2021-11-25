/**
 * @file List.h
 * @author Paul Stuever
 * @brief This is the header file for List.cpp
 * @assignment EECS268 Lab 08 - Timing
 * @date 2021-11-17
 * 
 * 
 */

#ifndef LIST_H
#define LIST_H
#include "ListInterface.h"
#include "Node.h"

template <typename T>
class List : public ListInterface<T>
{
  private:
    Node<T>* m_front;
    int m_length;
  public:
  /**
   * @brief Construct a new List that sets m_front to nullptr and sets length to 0
   * 
   */
    List();

    /**
     * @brief getEntry will use a jumper to return the value of a node at an index in the list
     * 
     * @param index 
     * @return T
     */
    virtual T getEntry(int index) const;

    /**
     * @brief insert will allow the user to insert a value wherever they want in the linked list
     * 
     * @param index 
     * @param entry 
     */
    virtual void insert(int index, T entry);

    /**
     * @brief remove will get rid of a value at an index in the list.
     * 
     * @param index 
     */
    virtual void remove(int index);

    /**
     * @brief clear will delete all values in the list
     * 
     */
    virtual void clear();

    /**
     * @brief setEntry will set the entry of an already existing node to a different value.
     * 
     * @param index 
     * @param entry 
     */
    virtual void setEntry(int index, T entry);

    /**
     * @brief returns the length of the current List.
     * 
     * @return int 
     */
    virtual int length() const;
    
};
#include "List.cpp"
#endif
