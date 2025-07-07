/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 11:31:08 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/07 11:06:32 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

#include <list>

std::vector<unsigned int> PmergeMe::generateJacobsthal(size_t n) {
  std::vector<unsigned int> seq;
  seq.push_back(0);
  seq.push_back(1);
  while (seq.back() < n) {
    size_t next = seq.back() + 2 * seq[seq.size() - 2];
    seq.push_back(next);
  }
  return seq;
}

void PmergeMe::buildInsertionOrder(size_t start, size_t end,
                                   const std::vector<unsigned int> &jacobsthal,
                                   std::vector<unsigned int> &order) {
  if (start > end)
    return;
  size_t len = end - start + 1;
  size_t j = 0;
  for (size_t i = 0; i < jacobsthal.size(); ++i) {
    if (jacobsthal[i] > len)
      break;
    j = i;
  }
  size_t mid = start + jacobsthal[j] - 1;
  if (mid > end)
    return;
  order.push_back(mid);
  if (mid > start)
    buildInsertionOrder(start, mid - 1, jacobsthal, order);
  buildInsertionOrder(mid + 1, end, jacobsthal, order);
}

std::vector<unsigned int> PmergeMe::getJacobsthalInsertionOrder(size_t k) {
  std::vector<unsigned int> jacobsthal = generateJacobsthal(k);
  std::vector<unsigned int> order;
  buildInsertionOrder(0, k - 1, jacobsthal, order);
  return order;
}

void PmergeMe::insertListSorted(std::list<unsigned int> &data,
                                unsigned int number) {
  std::list<unsigned int>::iterator it = data.begin();
  while (it != data.end() && *it < number) {
    ++it;
  }
  data.insert(it, number);
}

unsigned int PmergeMe::getNbrListIndex(std::list<unsigned int> &data,
                                    unsigned int index) {
  if (index >= data.size()) {
    throw std::out_of_range("Index out of range in getNbrListIndex");
  }

  std::list<unsigned int>::iterator it = data.begin();
  std::advance(it, index);
  return *it;
};

void PmergeMe::sortList(std::list<unsigned int> &data) {
  size_t n = data.size();
  if (n <= 1)
    return;
  std::list<unsigned int> smaller, larger;
  bool hasUnpaired = false;
  unsigned int unpairedValue;
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
  if (data.size() % 2 == 1) {
    hasUnpaired = true;
    unpairedValue = data.back();
  }
  std::vector<unsigned int> seqJacobsthal;
  if (smaller.size() != 1) {
    seqJacobsthal = getJacobsthalInsertionOrder(smaller.size());
  }
  sortList(larger);
  if (larger.size() == 1) {

    std::list<unsigned int>::iterator tmpNbr = smaller.begin();
    insertListSorted(larger, *tmpNbr);
  } else {
    for (std::vector<unsigned int>::const_iterator it = seqJacobsthal.begin();
         it != seqJacobsthal.end(); ++it) {
      unsigned int tmpNbr;
	  tmpNbr = getNbrListIndex(smaller, *it);
      insertListSorted(larger, tmpNbr);
    }
  }
  // if (hasUnpaired) {
  //   std::vector<unsigned int>::iterator pos =
  //       std::lower_bound(larger.begin(), larger.end(),
  //       smaller[unpairedValue]);
  //   larger.insert(pos, unpairedValue);
  // }
  data = larger;
  data = larger;
}

void PmergeMe::sortVector(std::vector<unsigned int> &data) {
  size_t n = data.size();
  if (n <= 1)
    return;
  std::vector<unsigned int> smaller, larger;
  bool hasUnpaired = false;
  unsigned int unpairedValue;

  size_t i = 0;
  for (i = 0; i + 1 < n; i += 2) {
    if (data[i] < data[i + 1]) {
      smaller.push_back(data[i]);
      larger.push_back(data[i + 1]);
    } else {
      smaller.push_back(data[i + 1]);
      larger.push_back(data[i]);
    }
  }
  if (n % 2 == 1) {
    hasUnpaired = true;
    unpairedValue = data.back();
  }
  std::vector<unsigned int> seqJacobsthal;
  if (smaller.size() != 1) {
    seqJacobsthal = getJacobsthalInsertionOrder(smaller.size());
  }
  sortVector(larger);

  if (larger.size() == 1) {
    std::vector<unsigned int>::iterator pos =
        std::lower_bound(larger.begin(), larger.end(), smaller[0]);
    larger.insert(pos, smaller[0]);
  } else {
    for (std::vector<unsigned int>::const_iterator it = seqJacobsthal.begin();
         it != seqJacobsthal.end(); ++it) {
      std::vector<unsigned int>::iterator pos =
          std::lower_bound(larger.begin(), larger.end(), smaller[*it]);
      larger.insert(pos, smaller[*it]);
    }
  }
  if (hasUnpaired) {
    std::vector<unsigned int>::iterator pos =
        std::lower_bound(larger.begin(), larger.end(), smaller[unpairedValue]);
    larger.insert(pos, unpairedValue);
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
    std::cout << "After: ";
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
