/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:20:24 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/20 16:22:05 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie::Zombie(void) {};

Zombie::~Zombie(void)
{
	std::cout << "Zombie :" << Name;
	std::cout << " has died"<<std::endl;
}

Zombie::Zombie(std::string name) : Name(name) {};

void	Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ...\n" ;
}
