/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:54:48 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/27 08:54:53 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : Name("Default"), Grade(75) {
  std::cout << "[Bureaucrat] Default constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string _Name, const int _Grade) : Name(_Name) {
  if (_Grade > 150)
    throw GradeTooLowException();
  else if (_Grade <= 0)
    throw GradeTooHighException();
  this->Grade = _Grade;
  std::cout << "[Bureaucrat] Parameterized constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
    : Name(other.Name), Grade(other.Grade) {
  std::cout << "[Bureaucrat] Copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  std::cout << "[Bureaucrat] Copy assignment called." << std::endl;
  if (this == &other)
    return *this;
  this->Grade = other.Grade;
  return *this;
}

Bureaucrat::~Bureaucrat(void) {
  std::cout << "[Bureaucrat] Destructor called" << std::endl;
}

void Bureaucrat::IncGrade(void) {
  if (this->Grade - 1 <= 0)
    throw GradeTooHighException();
  this->Grade--;
}

void Bureaucrat::DecGrade(void) {
  if (this->Grade + 1 > 150)
    throw GradeTooLowException();
  this->Grade++;
}

void Bureaucrat::AddGrade(const int _Grade) {
  if (this->Grade + _Grade > 150)
    throw GradeTooLowException();
  else if (this->Grade + _Grade <= 0)
    throw GradeTooHighException();
  this->Grade += _Grade;
}

int Bureaucrat::GetGrade(void) const { return (this->Grade); };
const std::string Bureaucrat::GetName(void) const { return (this->Name); };
const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade is too High!");
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade is too Low!");
}
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.GetName() << ", bureaucrat grade " << obj.GetGrade() << "."
     << std::endl;
  return (os);
}
