/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 11:13:30 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/06 13:07:40 by afogonca         ###   ########.fr       */
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
  static void binaryInsertVector(std::vector<unsigned int> &vec,
                                 unsigned int val);
  static void sortList(std::list<unsigned int> &list);
  static void binaryInsertList(std::list<unsigned int> &lst,
                                  unsigned int val);
    static void startVector(std::vector<unsigned int> & vec,
                            const std::string &input);
    static void startList(std::list<unsigned int> & list,
                          const std::string &other);
    static bool isValidString(const std::string &input);
    static unsigned int strToUInt(std::string str);
    class InvalidNumber : public std::exception {
    public:
      virtual const char *what(void) const throw();
    };
    class DupNumber : public std::exception {
    public:
      virtual const char *what(void) const throw();
    };

  public:
    static void startPmergeMe(const std::string &input, ContainerType type);
  };
#endif
