/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:59:52 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/02 15:22:29 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

class BitcoinExchange {
private:
  std::map<std::string, double> BtcPrices;
  void startBtcPrices(void);
  bool checkDates(std::string);
  double strToDouble(std::string str) const;
  bool isLeapYear(int year);
  int strToInt(std::string str) const;
  int dateToDays(int y, int m, int d);
  int daysInMonth(int month, int year);
  int isCloserDate(std::string Target, std::string Str1, std::string Str2);

public:
  BitcoinExchange(void);
  BitcoinExchange(const BitcoinExchange &other);
  BitcoinExchange &operator=(const BitcoinExchange &other);
  ~BitcoinExchange(void);
  void exchange(const std::string &input);
  class FileNotOpen : public std::exception {
  public:
    virtual const char *what(void) const throw();
  };
  class InvalidConversionBtcPrices : public std::exception {
  public:
    virtual const char *what(void) const throw();
  };
};

#endif
