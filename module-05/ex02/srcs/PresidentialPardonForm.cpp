/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:57:54 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/27 09:01:02 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("", 25, 5), Target("") {
  std::cout << "[PresidentialPardonForm] Default constructor called."
            << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm(target, 25, 5), Target(target) {
  std::cout << "[PresidentialPardonForm] Constructor called." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &other)
    : AForm(other.Target, 25, 5), Target(other.Target) {
  std::cout << "[PresidentialPardonForm] Copy constructor called." << std::endl;
  this->SetIsSigned(other.GetIsSigned());
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  std::cout << "[PresidentialPardonForm] Copy assigment operator called."
            << std::endl;
  if (this == &other)
    return *this;
  this->SetIsSigned(other.GetIsSigned());
  this->Target = other.Target;
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "[PresidentialPardonForm] Destructor called." << std::endl;
}

void PresidentialPardonForm::Executer() const {
  std::cout << "Informs that " << this->Target
            << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
