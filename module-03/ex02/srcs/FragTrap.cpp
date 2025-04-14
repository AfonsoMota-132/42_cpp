/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:21:36 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/11 10:26:14 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("ClavTrap") {
  Hp = 100;
  Ep = 50;
  Ad = 20;
  std::cout << "FragTrap's default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  Hp = 100;
  Ep = 50;
  Ad = 20;
  std::cout << "FragTrap's named constructor called for " << name << "\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap's copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  ClapTrap::operator=(other);
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap's destructor called for " << Name << "\n";
}

void	FragTrap::highFivesGuys(void)
{
	if (this->GetStatus(1))
		std::cout << "FragTrap High Five Guys!!" << std::endl;
}
