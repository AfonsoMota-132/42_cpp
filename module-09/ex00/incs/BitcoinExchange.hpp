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
public:
  BitcoinExchange(void);
  BitcoinExchange(const BitcoinExchange &other);
  BitcoinExchange &operator=(const BitcoinExchange &other);
  ~BitcoinExchange(void);
  class FileNotOpen : public std::exception {
  public:
    virtual const char *what(void) const throw();
  };
};

float	strToFloat(std::string str);

#endif
