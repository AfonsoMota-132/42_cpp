/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:44:30 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 22:06:02 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

Span::Span(void) : Size(42) {
  std::cout << "[Span] Default Constructor Called!" << std::endl;
}

Span::Span(unsigned int _Size) : Size(_Size) {
  std::cout << "[Span] Parameterized Constructor Called!" << std::endl;
};

Span::Span(const Span &other) {
  std::cout << "[Span] Copy Constructor Called!" << std::endl;
  this->Size = other.Size;
  this->List = other.List;
};

Span &Span::operator=(const Span &other) {
  std::cout << "[Span] Assignment Operator Called!" << std::endl;
  if (this == &other)
    return *this;
  this->Size = other.Size;
  this->List = other.List;
  return *this;
};

Span::~Span(void) { std::cout << "[Span] Destructor Called!" << std::endl; };

void Span::AddNumber(int Number) {
  if (this->List.size() + 1 > this->Size)
    throw LimitExceed();
  this->List.push_back(Number);
};

int Span::LongestSpan(void) const {
  if (this->List.size() < 2)
    throw NotEnoughNumbers();

  std::vector<int>::const_iterator it_max;
  std::vector<int>::const_iterator it_min;
  it_max = std::max_element(this->List.begin(), this->List.end());
  it_min = std::min_element(this->List.begin(), this->List.end());
  return (abs(*it_max - *it_min));
};

int Span::ShortestSpan(void) const{
  if (this->List.size() < 2)
    throw NotEnoughNumbers();

  std::vector<int> tmp(this->List);
  std::sort(tmp.begin(), tmp.end());
  std::vector<int>::iterator it = tmp.begin();
  int difference = abs(*it - *(it + 1));

  while (it + 1 != tmp.end()) {
    if (abs(*it - *(it + 1)) < difference)
      difference = abs(*it - *(it + 1));
    it++;
  }
  return (difference);
}

const char *Span::LimitExceed::what() const throw() {
  return "[Span] List Size exceeded";
};

const char *Span::NotEnoughNumbers::what() const throw() {
  return "[Span] Not Enough Numbers for Longest/Shortest Span";
};
