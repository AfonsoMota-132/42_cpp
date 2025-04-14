/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:49:47 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/11 09:43:46 by afogonca         ###   ########.pt       */
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

void ClapTrap::SetName(std::string name) { this->Name = name; }

bool ClapTrap::GetStatus(int ep) const {
  if (this->Hp == 0) {
    std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
    return (false);
  } else if (this->Ep == 0 && ep) {
    std::cout << "ClapTrap " << this->Name << " has no ep left!" << std::endl;
    return (false);
  }
  return (true);
}

void ClapTrap::Attack(const std::string &target) {
  if (this->GetStatus(1)) {
    std::cout << "ClapTrap " << this->Name << " attacks " << target
              << ", causing" << this->Ad << " points of damage!" << std::endl;
    this->Ep--;
  }
}

void ClapTrap::TakeDamage(unsigned int amount) {
  if (this->GetStatus(0)) {
    std::cout << "ClapTrap " << this->Name << " got attacked ";
    std::cout << ", taking " << amount << " points of damage!";
    if (amount >= this->Hp)
      this->Hp = 0;
    else
      this->Hp -= amount;
    if (this->Hp <= 0) {
      this->Hp = 0;
      std::cout << "And is dead!" << std::endl;
    } else
      std::cout << "And has now " << this->Hp << "HP!" << std::endl;
  }
}

void ClapTrap::BeRepaired(unsigned int amount) {
  if (this->GetStatus(1) && this->Hp != 10) {
    std::cout << "ClapTrap " << this->Name << " got repaired ";
    std::cout << ", healing " << amount << " points!";
    this->Ep--;
    if (amount >= 10 || amount + Hp >= 10)
      this->Hp = 10;
    else
      this->Hp += amount;
    if (this->Hp >= 10) {
      this->Hp = 10;
      std::cout << "And is now Full HP!" << std::endl;
    } else
      std::cout << "And has now " << this->Hp << "HP!" << std::endl;
  } else if (this->Hp == 10)
    std::cout << "ClapTrap " << this->Name << " is already Full HP!"
              << std::endl;
}
