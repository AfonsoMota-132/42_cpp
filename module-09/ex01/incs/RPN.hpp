/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 08:38:15 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/04 11:04:14 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <cstdlib>
#include <ctime>
#include <exception>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stack>
#include <string>

class RPN {
private:
  static bool verRPN(const std::string _RPN);
  static bool verNmb(const std::string _RPN);
  static int verSig(const std::string _RPN);
  static void runRPN(const std::string _RPN, std::stack<double> Stack);
  static long int strToLInt(std::string str);
  RPN(void);
  RPN(const RPN &other);
  RPN &operator=(const RPN &other);
  ~RPN(void);

public:
  static void rpn(const std::string _RPN);
  class InvalidRPN : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

#endif
