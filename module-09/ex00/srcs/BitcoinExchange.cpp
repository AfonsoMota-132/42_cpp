/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:07:07 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/02 15:28:44 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : BtcPrices() {
  std::cout << "[BitcoinExchange] Default Constructor Called" << std::endl;
  startBtcPrices();
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
    : BtcPrices(other.BtcPrices) {
  std::cout << "[BitcoinExchange] Copy Constructor Called" << std::endl;
};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
  std::cout << "[BitcoinExchange] Assignment Operator Called" << std::endl;
  this->BtcPrices = other.BtcPrices;
  return *this;
};

BitcoinExchange::~BitcoinExchange(void) {
  std::cout << "[BitcoinExchange] Destructor called" << std::endl;
};

void BitcoinExchange::startBtcPrices(void) {
  std::ifstream file("data.csv");

  if (!file.is_open())
    throw FileNotOpen();

  std::string line;
  std::getline(file, line);
  while (std::getline(file, line)) {
    size_t i = line.find(',');
    this->BtcPrices[line.substr(0, i)] = strToFloat(line.substr(i + 1));
  }
};

const char *BitcoinExchange::FileNotOpen::what() const throw() {
  return "[BitcoinExchange] Couldn't Open csv file!";
};

float strToFloat(std::string str) {
  std::istringstream iss(str);
  float value;

  if (!(iss >> value))
    return -1;
  return value;
}
