/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:05:40 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/27 09:05:50 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Intern.hpp"

Intern::Intern() {
  std::cout << "[Intern] Default constructor called." << std::endl;
}

Intern::Intern(const Intern &other) {
  std::cout << "[Intern] Copy constructor called." << std::endl;
  (void)other;
}

Intern &Intern::operator=(const Intern &other) {
  std::cout << "[Intern] Copy assigment operator called." << std::endl;
  (void)other;
  return *this;
}

Intern::~Intern() { std::cout << "[Intern] Destructor called." << std::endl; }

AForm *Intern::makeForm(const std::string &formName,
                        const std::string &formTargetName) {
  std::string names[3] = {"PresidentialPardon", "RobotomyRequest",
                          "ShrubberyCreation"};
  int number = 0;
  while (number <= 3) {
    if (names[number] == formName)
      break;
    number++;
  }
  switch (number) {
  case 0:
    return (makePresidentialPardonForm(formTargetName));
  case 1:
    return (makeRobotomyRequestForm(formTargetName));
  case 2:
    return (makeShrubberyCreationForm(formTargetName));
  default:
    throw FormNotFound();
  }
  // Need to change this i think
}

AForm *Intern::makePresidentialPardonForm(const std::string &target) {
  return (new PresidentialPardonForm(target));
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target) {
  return (new RobotomyRequestForm(target));
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target) {
  return (new ShrubberyCreationForm(target));
}

const char *Intern::FormNotFound::what() const throw() {
  return "Form requested was not found!";
}
