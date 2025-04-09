/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:12:22 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/21 09:25:21 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

int main(void)
{
	std::string	name;

	std::cout << "==============================" << std::endl;
	std::cout << "	Creating Zombie" << std::endl;
	std::cout << "==============================" << std::endl;
	std::cout << "Zombies's Name: ";
	std::cin >> name;
	if (name.empty())
		std::cout << "Empty name" << std::endl;
	else
	{
		Zombie *zombie = newZombie(name);
		std::cout << "Manual annonce" << std::endl;
		zombie->announce();
		delete zombie;
	}
	std::cout << "Zombies's Name: ";
	std::cin >> name;
	if (name.empty())
		std::cout << "Empty name" << std::endl;
	else
		randomChump(name);
	return (0);
}
