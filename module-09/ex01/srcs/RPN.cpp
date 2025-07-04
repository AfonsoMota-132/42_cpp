/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 08:49:32 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/04 11:04:08 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RPN.hpp"

RPN::RPN(void) {
  std::cout << "[RPN] Default Constructor called!" << std::endl;
};

RPN::RPN(const RPN &other) {
  std::cout << "[RPN] Copy Constructor called!" << std::endl;
  (void)other;
};

RPN &RPN::operator=(const RPN &other) {
  std::cout << "[RPN] Copy Constructor called!" << std::endl;
  return *this;
  (void)other;
};

bool RPN::verRPN(const std::string _RPN) {
  for (size_t i = 0; i < _RPN.length(); i++) {
    if (!(_RPN.at(i) >= '0' && _RPN.at(i) <= '9') &&
        (_RPN.at(i) != '+' && _RPN.at(i) != '-' && _RPN.at(i) != '*' &&
         _RPN.at(i) != '/' && _RPN.at(i) != ' '))
      return false;
    if (i + 1 < _RPN.length()) {
      if ((_RPN.at(i) == '+' || _RPN.at(i) == '-' || _RPN.at(i) == '*' ||
           _RPN.at(i) == '/') &&
          (_RPN.at(i + 1) == '+' || _RPN.at(i + 1) == '-' ||
           _RPN.at(i + 1) == '*' || _RPN.at(i + 1) == '/'))
        return false;
      if (_RPN.at(i) >= '0' && _RPN.at(i) <= '9' && _RPN.at(i + 1) >= '0' &&
          _RPN.at(i + 1) <= '9')
        return false;
      if (_RPN.at(i) >= '0' && _RPN.at(i) <= '9' &&
          (_RPN.at(i + 1) == '+' || _RPN.at(i + 1) == '-' ||
           _RPN.at(i + 1) == '*' || _RPN.at(i + 1) == '/'))
        return false;
    }
  }
  return true;
};

bool RPN::verNmb(const std::string _RPN) {
  for (size_t i = 0; i < _RPN.length(); i++) {
    if (_RPN.at(i) >= '0' && _RPN.at(i) <= '9')
      return true;
  }
  return false;
};

int RPN::verSig(const std::string _RPN) {
  for (size_t i = 0; i < _RPN.length(); i++) {
    if (_RPN.at(i) == '+')
      return 1;
    if (_RPN.at(i) == '-')
      return 2;
    if (_RPN.at(i) == '*')
      return 3;
    if (_RPN.at(i) == '/')
      return 4;
  }
  return 0;
};

void RPN::rpn(const std::string _RPN) {
  std::stack<double> *myStack = new std::stack<double>();
  try {
    runRPN(_RPN, *myStack);
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  delete myStack;
}

long int RPN::strToLInt(std::string str) {
  std::istringstream iss(str);
  double value;

  if (!(iss >> value)) {
    return -1;
  }
  return value;
}

void RPN::runRPN(const std::string _RPN, std::stack<double> Stack) {
  if (_RPN.empty()) {
    if (Stack.size() >= 2)
      throw InvalidRPN();
    std::cout << "Final Result: " << Stack.top() << std::endl;
    return;
  }
  if (!verRPN(_RPN))
    throw InvalidRPN();
  int i = _RPN.find(' ');
  std::string nStr(_RPN);
  std::string tmp = nStr.substr(0, i);
  double nmb = strToLInt(tmp);
  if (verNmb(tmp)) {
    if (Stack.size() >= 2 || nmb < 0 || nmb > 9)
      throw InvalidRPN();
    Stack.push(nmb);
  }
  if (int Sig = verSig(tmp)) {
    if (Stack.size() < 2)
      throw InvalidRPN();
    double nmb1 = Stack.top();
    Stack.pop();
    double nmb2 = Stack.top();
    Stack.pop();
    if (Sig == 1) {
      nmb2 += nmb1;
    }
    if (Sig == 2) {
      nmb2 -= nmb1;
    }
    if (Sig == 3) {
      nmb2 *= nmb1;
    }
    if (Sig == 4) {
      if (!nmb1)
        throw InvalidRPN();
      nmb2 /= nmb1;
    }
    Stack.push(nmb2);
  }
  runRPN(_RPN.substr(i + 1, _RPN.length() - 1), Stack);
};

const char *RPN::InvalidRPN::what() const throw() {
  return "[RPN] Invalid RPN Values!";
}
