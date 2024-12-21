/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:25:55 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/21 14:27:43 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << "<" <<	this->name << ">" << " attacks with their ";
	std::cout << "<" <<this->_weapon.getType() << ">" << std::endl;
}
