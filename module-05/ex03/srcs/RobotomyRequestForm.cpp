/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:59:02 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/27 09:06:08 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45), Target("") {
  std::cout << "[RobotomyRequestForm] Default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm(target, 72, 45), Target(target) {
  std::cout << "[RobotomyRequestForm] Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other.Target, 72, 45) {
  std::cout << "[RobotomyRequestForm] Copy constructor constructor called."
            << std::endl;
  this->SetIsSigned(other.GetIsSigned());
  this->Target = other.Target;
}
RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  std::cout
      << "[RobotomyRequestForm] Copy assignment operator constructor called."
      << std::endl;
  if (this == &other)
    return *this;
  this->SetIsSigned(other.GetIsSigned());
  this->Target = other.Target;
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "[RobotomyRequestForm] Destructor called." << std::endl;
}

void RobotomyRequestForm::Executer() const {
  std::cout << this->Target << " started to drill" << std::endl;
  std::cout << "vrummmm vrummmm 🛠️🛠️" << std::endl;

  std::srand(std::time(0));
  if (rand() % 2)
    std::cout << this->Target << " has been sucessfly robotized!" << std::endl;
  else
    std::cout << this->Target << " failed to robotized!" << std::endl;
}
