/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:01:56 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 15:12:53 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>

template <typename Tmp> class Array {
private:
  Tmp *Arr;
  size_t Size;

public:
  Array(void) : Arr(new Tmp[0]), Size(0) {
    std::cout << "[ARRAY] Default constructor called" << std::endl;
  };
  Array(size_t len) : Arr(new Tmp[len]), Size(len) {
    std::cout << "[ARRAY] Parameterized constructor called" << std::endl;
  };
  Array(Array const &other) : Arr(new Tmp[other.Size]), Size(other.Size) {
    std::cout << "[ARRAY] Copy constructor called" << std::endl;
    for (size_t i = 0; i < this->Size; i++)
      this->Arr[i] = other.Arr[i];
  };
  Array &operator=(Array const &other) {
    std::cout << "[ARRAY] Assignment operator called" << std::endl;
    if (this != &other) {
      delete [] this->Arr;
      Arr = new Tmp[other.Size];
      Size = other.Size;
      for (size_t i = 0; i < this->Size; i++)
        this->Arr[i] = other.Arr[i];
    }
    return *this;
  };
  ~Array(void) {
    std::cout << "[ARRAY] Destructor called" << std::endl;
    delete[] Arr;
  };
  Tmp &operator[](size_t i) {
    if (i >= this->size() || !this->Arr)
      throw Array<Tmp>::OutOfRangeException();
    return Arr[i];
  };
  unsigned int size(void) const {
    return this->Size;
  }
  class OutOfRangeException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

template <typename Tmp>
const char *Array<Tmp>::OutOfRangeException::what() const throw() {
  return "Index out of range";
};

#endif
