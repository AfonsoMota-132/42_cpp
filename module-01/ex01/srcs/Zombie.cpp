/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:39:38 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/21 09:40:45 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie::Zombie(void) {};

Zombie::~Zombie(void) 
{
	std::cout << "Zombie " << Name;
	std::cout << ": has died"<<std::endl;
}

Zombie::Zombie(std::string name) : Name(name) {}

void	Zombie::announce(void)
{
	if (Name != "Foo")
		std::cout << "<" << Name << ">" << ": BraiiiiiiinnnzzzZ...\n" ;
	else
		std::cout << "Foo: BraiiiiiiinnnzzzZ...\n" ;
}

void	Zombie::setName(std::string name)
{
	Name = name;
}
