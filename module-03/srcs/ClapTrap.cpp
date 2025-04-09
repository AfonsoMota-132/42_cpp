/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:49:47 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/09 20:14:19 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Name("ClapTrap"), Hp(10), Ep(10), Ad(0) {
  std::cout << "ClapTrap's Default Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hp(10), Ep(10), Ad(0) {
  std::cout << "ClapTrap's Default Parameter Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : Name(other.Name), Hp(other.Hp), Ep(other.Ep), Ad(other.Ad) {
  std::cout << "ClapTrap's Copy Constructor called!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap's Default Destructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    this->Name = other.GetName();
    this->Hp = other.GetHp();
    this->Ep = other.GetEp();
    this->Ad = other.GetAd();
  }
  return (*this);
}

std::string ClapTrap::GetName(void) const { return (this->Name); }

unsigned int ClapTrap::GetHp(void) const { return (this->Hp); }

unsigned int ClapTrap::GetEp(void) const { return (this->Ep); }

unsigned int ClapTrap::GetAd(void) const { return (this->Ad); }
