/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:58:01 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 22:23:21 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

#include <iostream>
int main(void) {
  std::cout << "5 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    Span sp = Span(5);
    for (int i = 0; i < 5; i++) {
      const int tmp = std::rand();
      std::cout << "i: " << i << "\t" << tmp << std::endl;
      sp.AddNumber(tmp);
    }
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "100 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    unsigned int size = 100;
    Span sp = Span(size);
    std::cout << std::endl << 0 << "-" << 3;
    for (unsigned int i = 0; i < size; i++) {
      const int tmp = std::rand();
      std::cout << "\t" << tmp;
      if (tmp < 9999999)
        std::cout << "\t";
      if (i % 4 == 3 && i && i + 1 < size)
        std::cout << std::endl << i << "-" << i + 3;
      sp.AddNumber(tmp);
    }
    std::cout << std::endl;
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "500 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    unsigned int size = 500;
    Span sp = Span(size);
    std::cout << std::endl << 0 << "-" << 3;
    for (unsigned int i = 0; i < size; i++) {
      const int tmp = std::rand();
      std::cout << "\t" << tmp;
      if (tmp < 9999999)
        std::cout << "\t";
      if (i % 4 == 3 && i && i + 1 < size)
        std::cout << std::endl << i << "-" << i + 3;
      sp.AddNumber(tmp);
    }
    std::cout << std::endl;
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "1000 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    unsigned int size = 1000;
    Span sp = Span(size);
    std::cout << std::endl << 0 << "-" << 3;
    for (unsigned int i = 0; i < size; i++) {
      const int tmp = std::rand();
      std::cout << "\t" << tmp;
      if (tmp < 9999999)
        std::cout << "\t";
      if (i % 4 == 3 && i && i + 1 < size)
        std::cout << std::endl << i + 1 << "-" << i + 4;
      sp.AddNumber(tmp);
    }
    std::cout << std::endl;
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "5000 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    unsigned int size = 5000;
    Span sp = Span(size);
    std::cout << std::endl << 0 << "-" << 3;
    for (unsigned int i = 0; i < size; i++) {
      const int tmp = std::rand();
      std::cout << "\t" << tmp;
      if (tmp < 9999999)
        std::cout << "\t";
      if (i % 4 == 3 && i && i + 1 < size)
        std::cout << std::endl << i + 1 << "-" << i + 4;
      sp.AddNumber(tmp);
    }
    std::cout << std::endl;
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "10000 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    unsigned int size = 10000;
    Span sp = Span(size);
    for (unsigned int i = 0; i < size; i++) {
      const int tmp = std::rand();
      sp.AddNumber(tmp);
    }
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "50000 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    unsigned int size = 50000;
    Span sp = Span(size);
    for (unsigned int i = 0; i < size; i++) {
      const int tmp = std::rand();
      sp.AddNumber(tmp);
    }
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "100000 Numbers! ";
  std::cout << std::endl << std::endl;
  try {
    unsigned int size = 100000;
    Span sp = Span(size);
    for (unsigned int i = 0; i < size; i++) {
      const int tmp = std::rand();
      sp.AddNumber(tmp);
    }
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "5 Numbers Excption limit";
  std::cout << std::endl << std::endl;
  try {
    Span sp = Span(5);
    for (int i = 0; i < 6; i++) {
      const int tmp = std::rand();
      std::cout << "i: " << i << "\t" << tmp << std::endl;
      sp.AddNumber(tmp);
    }
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "5 Numbers but only 1 Exception not enough, shortest";
  std::cout << std::endl << std::endl;
  try {
    Span sp = Span(5);
    const int tmp = std::rand();
    sp.AddNumber(tmp);

    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;
  std::cout << "5 Numbers but only 1 Exception not enough, shortest";
  std::cout << std::endl << std::endl;
  try {
    Span sp = Span(5);
    const int tmp = std::rand();
    sp.AddNumber(tmp);

    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  return 0;
}
