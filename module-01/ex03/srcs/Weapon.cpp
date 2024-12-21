/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:21:59 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/21 10:26:09 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {}

void	Weapon::setType(std::string type) {
	this->type = type;
}

std::string	Weapon::getType() {
	return (this->type);
}
