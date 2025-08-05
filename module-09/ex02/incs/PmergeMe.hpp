/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 11:13:30 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/07 10:26:13 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <sys/time.h>
#include <vector>

enum ContainerType { VECTOR, LIST };

class PmergeMe {
private:
  PmergeMe(void);
  PmergeMe(const PmergeMe &other);
  PmergeMe &operator=(const PmergeMe &other);
  ~PmergeMe(void);
  static void sortVector(std::vector<unsigned int> &vec);
  static void sortList(std::list<unsigned int> &list);
  static void insertListSorted(std::list<unsigned int> &data,
                               unsigned int number);
  static unsigned int getNbrListIndex(std::list<unsigned int> &data,
                                      unsigned int number);
  static void startVector(std::vector<unsigned int> &vec,
                          const std::string &input);
  static void startList(std::list<unsigned int> &list,
                        const std::string &other);
  static bool isValidString(const std::string &input);
  static unsigned int strToUInt(std::string str);
  static std::vector<unsigned int> generateJacobsthal(size_t n);
  static void buildInsertionOrder(size_t start, size_t end,
                                  const std::vector<unsigned int> &jacobsthal,
                                  std::vector<unsigned int> &order);
  static std::vector<unsigned int> getJacobsthalInsertionOrder(size_t k);

  class InvalidNumber : public std::exception {
  public:
    virtual const char *what(void) const throw();
  };
  class DupNumber : public std::exception {
  public:
    virtual const char *what(void) const throw();
  };

public:
  static void startPmergeMe(int ac, char **av, ContainerType type);
};
#endif
