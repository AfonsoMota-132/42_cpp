/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 11:31:08 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/06 13:13:41 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

#include <list>

void PmergeMe::binaryInsertList(std::list<unsigned int> &lst,
                                unsigned int val) {
  std::list<unsigned int>::iterator pos = lst.begin();
  while (pos != lst.end() && *pos < val) {
    ++pos;
  }
  lst.insert(pos, val);
}

void PmergeMe::sortList(std::list<unsigned int> &data) {
  size_t n = data.size();
  if (n <= 1)
    return;
  std::list<unsigned int> smaller, larger;
  std::list<unsigned int>::iterator it = data.begin();
  while (true) {
    std::list<unsigned int>::iterator first = it;
    if (it == data.end())
      break;
    ++it;
    if (it == data.end()) {
      larger.push_back(*first);
      break;
    }
    std::list<unsigned int>::iterator second = it;
    ++it;

    if (*first < *second) {
      smaller.push_back(*first);
      larger.push_back(*second);
    } else {
      smaller.push_back(*second);
      larger.push_back(*first);
    }
  }
  sortList(larger);
  for (std::list<unsigned int>::const_iterator sit = smaller.begin();
       sit != smaller.end(); ++sit) {
    binaryInsertList(larger, *sit);
  }

  data = larger;
}

void PmergeMe::binaryInsertVector(std::vector<unsigned int> &vec,
                                  unsigned int val) {
  std::vector<unsigned int>::iterator pos =
      std::lower_bound(vec.begin(), vec.end(), val);
  vec.insert(pos, val);
}

void PmergeMe::sortVector(std::vector<unsigned int> &data) {
  size_t n = data.size();
  if (n <= 1)
    return;
  std::vector<unsigned int> smaller, larger;

  for (size_t i = 0; i + 1 < n; i += 2) {
    if (data[i] < data[i + 1]) {
      smaller.push_back(data[i]);
      larger.push_back(data[i + 1]);
    } else {
      smaller.push_back(data[i + 1]);
      larger.push_back(data[i]);
    }
  }

  if (n % 2 == 1) {
    larger.push_back(data.back());
  }
  sortVector(larger);
  for (std::vector<unsigned int>::const_iterator it = smaller.begin();
       it != smaller.end(); ++it) {
    binaryInsertVector(larger, *it);
  }
  data = larger;
}

bool PmergeMe::isValidString(const std::string &input) {
  for (size_t i = 0; i < input.size(); ++i) {
    unsigned char ch = input[i];
    if (ch != '\0' && !std::isdigit(ch) && !std::isspace(ch)) {
      std::cout << static_cast<int>(ch) << std::endl;
      return false;
    }
  }
  return true;
};

unsigned int PmergeMe::strToUInt(std::string str) {
  std::istringstream iss(str);
  double value;

  if (!(iss >> value)) {
    return -1;
  }
  return value;
};

void PmergeMe::startVector(std::vector<unsigned int> &vec,
                           const std::string &input) {
  size_t i = input.find_first_not_of(' ');
  if (i == std::string::npos)
    return;
  if (!isValidString(input))
    throw InvalidNumber();
  std::string newStr = input.substr(i);
  size_t y = newStr.find(' ');
  unsigned int newNmb;
  if (y != std::string::npos) {
    newNmb = strToUInt(newStr.substr(0, y));
  } else {
    newNmb = strToUInt(newStr);
  }
  if (std::find(vec.begin(), vec.end(), newNmb) != vec.end()) {
    throw DupNumber();
  } else {
    vec.push_back(newNmb);
  }
  if (y != std::string::npos) {
    startVector(vec, newStr.substr(y + 1));
  }
};

void PmergeMe::startList(std::list<unsigned int> &list,
                         const std::string &input) {
  size_t i = input.find_first_not_of(' ');
  if (i == std::string::npos)
    return;
  if (!isValidString(input))
    throw InvalidNumber();
  std::string newStr = input.substr(i);
  size_t y = newStr.find(' ');
  unsigned int newNmb;
  if (y != std::string::npos) {
    newNmb = strToUInt(newStr.substr(0, y));
  } else {
    newNmb = strToUInt(newStr);
  }
  if (std::find(list.begin(), list.end(), newNmb) != list.end()) {
    throw DupNumber();
  } else {
    list.push_back(newNmb);
  }
  if (y != std::string::npos) {
    startList(list, newStr.substr(y + 1));
  }
};

void PmergeMe::startPmergeMe(const std::string &input, ContainerType type) {
  if (type == VECTOR) {
    std::vector<unsigned int> vec;
    try {
      startVector(vec, input);
    } catch (const std::exception &e) {
      std::cerr << e.what() << std::endl;
      return;
    };
    if (vec.size() == 0) {
      std::cerr << "[PmergeMe] No numbers found inside the input string!"
                << std::endl;
    }
    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); i++) {
      std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    sortVector(vec);
    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); i++) {
      std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
  } else if (type == LIST) {
    std::list<unsigned int> list;
    try {
      startList(list, input);
    } catch (const std::exception &e) {
      std::cerr << e.what() << std::endl;
      return;
    };
    if (list.size() == 0) {
      std::cerr << "[PmergeMe] No numbers found inside the input string!"
                << std::endl;
    }
    std::cout << "Before: ";
    for (std::list<unsigned int>::iterator it = list.begin(); it != list.end();
         ++it) {
      std::cout << *it << " ";
    }
    std::cout << std::endl;
    sortList(list);
    std::cout << "Before: ";
    for (std::list<unsigned int>::iterator it = list.begin(); it != list.end();
         ++it) {
      std::cout << *it << " ";
    }
    std::cout << std::endl;
  }
};

const char *PmergeMe::InvalidNumber::what(void) const throw() {
  return "[PmergeMe] Invalid characters inside the input string!";
}

const char *PmergeMe::DupNumber::what(void) const throw() {
  return "[PmergeMe] Duplicated numbers inside the input string!";
}
