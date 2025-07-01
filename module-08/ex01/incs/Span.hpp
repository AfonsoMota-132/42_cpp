/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:38:52 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 21:57:11 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
class Span {
private:
  std::vector<int> List;
  unsigned int Size;

public:
  Span(void);
  Span(unsigned int _Size);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span(void);

  void AddNumber(int number);
  int LongestSpan(void) const;
  int ShortestSpan(void) const;
  class LimitExceed : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class NotEnoughNumbers : public std::exception {
  public:
    virtual const char *what(void) const throw();
  };
};

#endif
