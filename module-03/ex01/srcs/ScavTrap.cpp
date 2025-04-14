/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:55:55 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/11 10:05:57 by afogonca         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ClavTrap") {
  Hp = 100;
  Ep = 50;
  Ad = 20;
  std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  Hp = 100;
  Ep = 50;
  Ad = 20;
  std::cout << "ScavTrap named constructor called for " << name << "\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  ClapTrap::operator=(other);
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called for " << Name << "\n";
}

void ScavTrap::attack(const std::string &target) {
  std::cout << "ScavTrap " << Name << " attacks " << target << ", causing "
            << Ad << " points of damage!\n";
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode.\n";
}
