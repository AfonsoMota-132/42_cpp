/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:28:33 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/21 14:30:27 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB() {}

void	HumanB::attack() {
	if (this->_weapon == NULL)
		std::cout << "<" <<	this->_name << ">" << " is unarmed" << std::endl;
	else
	{
			std::cout << "<" <<	this->_name << ">" << " attacks with their ";
			std::cout << "<" <<this->_weapon->getType() << ">" << std::endl;
}
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
