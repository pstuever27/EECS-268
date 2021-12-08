/**
 * @file Pokemon.h
 * @author Paul Stuever
 * @brief Header file for Pokemon.cpp
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string>

class Pokemon
{
private:
  std::string m_AmericanName;
  std::string m_JapaneseName;
  int m_number;

public:
/**
 * @brief Construct a new Pokemon object
 * 
 */
  Pokemon();

  /**
   * @brief Set the American Name 
   * 
   * @param name 
   */
  void setAmName(std::string name);

  /**
   * @brief Set the Japan Name 
   * 
   * @param name 
   */
  void setJapanName(std::string name);

  /**
   * @brief Set the Number 
   * 
   * @param number 
   */
  void setNumber(int number);

  /**
   * @brief Get the American Name 
   * 
   * @return std::string 
   */
  std::string getAmName();

  /**
   * @brief Get the Japan Name 
   * 
   * @return std::string 
   */
  std::string getJapanName();

  /**
   * @brief Get the Number 
   * 
   * @return int 
   */
  int getNumber();

  /**
   * @brief operator overloading for Pokemon objects
   */
  bool operator>(Pokemon rhs);

  /**
   * @brief operator overloading for Pokemon objects
   */
  bool operator<(Pokemon rhs);
  
  /**
   * @brief  operator overloading for Pokemon objects
   */
  bool operator==(Pokemon rhs);

  /**
   * @brief operator overloading for Pokemon objects
   */
  bool operator==(int rhs);

  /**
   * @brief operator overloading for Pokemon objects
   */
  bool operator<(int rhs);

  /**
   * @brief operator overloading for Pokemon objects
   */
  bool operator>(int rhs);
};
#endif
