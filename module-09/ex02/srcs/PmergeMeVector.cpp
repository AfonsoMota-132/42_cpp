/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVector.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:20:12 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/07 10:23:19 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMeVector.hpp"

void PmergeMeVector::startVector(std::vector<unsigned int> &vec,
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
