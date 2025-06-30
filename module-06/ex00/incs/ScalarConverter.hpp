/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:04:40 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 11:04:43 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

#define DIGITS "0123456789"

class ScalarConverter {
private:
  ScalarConverter();
  ScalarConverter(const ScalarConverter &other);
  ScalarConverter &operator=(const ScalarConverter &other);
  ~ScalarConverter();
  static bool CheckSign(const std::string &representation);
  static bool IsChar(const std::string &representation);
  static bool IsInt(const std::string &representation);
  static bool IsFloat(const std::string &representation);
  static bool IsDouble(const std::string &representation);
  static void ConvertFromChar(const std::string &representation);
  static void ConvertToNumber(const std::string &representation,
                              long double number);
  static void ConvertToChar(const char &c);

public:
  static void Convert(const std::string &representation);
};

#endif
