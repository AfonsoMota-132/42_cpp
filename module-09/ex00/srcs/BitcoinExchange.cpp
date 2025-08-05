/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:07:07 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/06 10:47:01 by afogonca         ###   ########.fr       */
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

bool BitcoinExchange::isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int BitcoinExchange::daysInMonth(int month, int year) {
  if (month == 2)
    return isLeapYear(year) ? 29 : 28;
  if (month == 4 || month == 6 || month == 9 || month == 11)
    return 30;
  return 31;
}

int BitcoinExchange::dateToDays(int y, int m, int d) {
  int days = 0;
  for (int i = 1; i < m; ++i)
    days += daysInMonth(i, y);
  for (int i = 0; i < y; ++i)
    days += isLeapYear(i) ? 366 : 365;
  return days;
  (void)d;
};

int BitcoinExchange::isCloserDate(std::string Target, std::string Str1,
                                  std::string Str2) {
  if (!checkDates(Target) || !checkDates(Str1) || !checkDates(Str2))
    return -1;
  int i = Target.find('-');
  int yearTarget = strToInt(Target.substr(0, i));
  int y = Target.find('-', i + 1);
  int monthTarget = strToInt(Target.substr(i + 1, y));
  i = y;
  y = Target.find('-', i + 1);
  int dayTarget = strToInt(Target.substr(i + 1, y));

  i = Str1.find('-');
  int yearStr1 = strToInt(Str1.substr(0, i));
  y = Str1.find('-', i + 1);
  int monthStr1 = strToInt(Str1.substr(i + 1, y));
  i = y;
  y = Str1.find('-', i + 1);
  int dayStr1 = strToInt(Str1.substr(i + 1, y));

  i = Str2.find('-');
  int yearStr2 = strToInt(Str2.substr(0, i));
  y = Str2.find('-', i + 1);
  int monthStr2 = strToInt(Str2.substr(i + 1, y));
  i = y;
  y = Str2.find('-', i + 1);
  int dayStr2 = strToInt(Str2.substr(i + 1, y));

  int daysTarget = dateToDays(yearTarget, monthTarget, dayTarget);
  int days1 = dateToDays(yearStr1, monthStr1, dayStr1);
  int days2 = dateToDays(yearStr2, monthStr2, dayStr2);
  if (days1 <= daysTarget && days2 <= daysTarget) {
    if (days1 <= days2)
      return (1);
    else if (days1 > days2)
      return (0);
  } else if (days2 <= daysTarget) {
    return (1);
  }
  return -1;
};

bool BitcoinExchange::checkDates(std::string line) {
  int dashCount = 0;

  for (size_t i = 0; i < line.length(); ++i) {
    if (i != 0 && line[i] == '-' && line[i + 1] && line[i + 1] != '-')
      ++dashCount;
  }
  if (dashCount != 2)
    return false;
  int i = line.find('-');
  int year = strToInt(line.substr(0, i));
  int y = line.find('-', i + 1);
  int month = strToInt(line.substr(i + 1, y));
  i = y;
  y = line.find('-', i + 1);
  int day = strToInt(line.substr(i + 1, y));
  if (((month % 2 == 1 && month <= 7) || (month % 2 == 0 && month >= 8)) &&
      day > 31)
    return false;
  else if (((month % 2 == 0 && month != 2 && month <= 7) ||
            (month % 2 == 1 && month >= 8)) &&
           day > 30)
    return false;
  else if (month == 2 &&
           ((isLeapYear(year) && day > 29) || (!isLeapYear(year) && day > 28)))
    return false;
  if (month < 1 || month > 12)
    return false;
  return true;
}

void BitcoinExchange::startBtcPrices(void) {
  std::ifstream file("data.csv");

  if (!file.is_open())
    throw FileNotOpen();

  std::string line;
  std::getline(file, line);
  while (std::getline(file, line)) {
    size_t i = line.find(',');
    double BtcValue = strToDouble(line.substr(i + 1));
    if (BtcValue < 0)
      throw InvalidConversionBtcPrices();
    if (!checkDates(line.substr(0, i)))
      throw InvalidConversionBtcPrices();
    this->BtcPrices[line.substr(0, i)] = strToDouble(line.substr(i + 1));
  }
};

void BitcoinExchange::exchange(const std::string &input) {
  std::ifstream file(input.c_str());

  if (!file.is_open())
    throw FileNotOpen();
  std::string line;
  std::getline(file, line);
  while (std::getline(file, line)) {
    size_t i = line.find('|');
    std::string date = line.substr(0, i);
    double BtcCount = strToDouble(line.substr(i + 1));
    std::map<std::string, double>::iterator last = BtcPrices.end();
    --last;
    std::map<std::string, double>::iterator it = BtcPrices.begin();
    std::string closerDate = it->first;
    double BtcValue = it->second;
    ++it;
    if (BtcCount < 0 || BtcCount > 1000)
      std::cout << "[BitcoinExchange] Error: Invalid Bitcoin Count => "
                << BtcCount << std::endl;
    else if (!checkDates(date))
      std::cout << "[BitcoinExchange] Error: bad input => " << date << " "
                << BtcCount << std::endl;
    else {
      for (; it != last; ++it) {
        int tmp = isCloserDate(date, closerDate, it->first);
        if (tmp == 1) {
          closerDate = it->first;
          BtcValue = it->second;
        }
      }
      int i = date.find('-');
      int yeard = strToInt(date.substr(0, i));
      int y = date.find('-', i + 1);
      int monthd = strToInt(date.substr(i + 1, y));
      i = y;
      y = line.find('-', i + 1);
      int dayd = strToInt(date.substr(i + 1, y));

      i = closerDate.find('-');
      int yeart = strToInt(closerDate.substr(0, i));
      y = closerDate.find('-', i + 1);
      int montht = strToInt(closerDate.substr(i + 1, y));
      i = y;
      y = line.find('-', i + 1);
      int dayt = strToInt(closerDate.substr(i + 1, y));
      if (dateToDays(yeard, monthd, dayd) < dateToDays(yeart, montht, dayt) ||
          closerDate.empty()) {
        std::cerr << "[BitcoinExchange] Error: No date Prior or Equal => "
                  << date << std::endl;
      } else {
        std::cout << date << " => " << BtcCount << " = " << BtcCount * BtcValue
                  << "\t" << closerDate << "\t" << BtcValue << std::endl;
      }
    }
  }
};

const char *BitcoinExchange::FileNotOpen::what() const throw() {
  return "[BitcoinExchange] Couldn't Open csv file!";
};

const char *BitcoinExchange::InvalidConversionBtcPrices::what() const throw() {
  return "[BitcoinExchange] Invalid Value in data.csv/input file!";
};

int BitcoinExchange::strToInt(std::string str) const {
  std::istringstream iss(str);
  int value;

  if (!(iss >> value)) {
    return -1;
  }
  return value;
};

double BitcoinExchange::strToDouble(std::string str) const {
  std::istringstream iss(str);
  double value;

  if (!(iss >> value)) {
    return -1;
  }
  return value;
}
