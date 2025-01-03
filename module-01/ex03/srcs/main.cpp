/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:30:50 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/21 14:42:43 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"
#include "../incs/HumanB.hpp"
#include "../incs/Weapon.hpp"

int main()
{
	std::string	name;
	std::string weap;
	Weapon weaponA;
	Weapon weaponB;

	std::cout << "Enter the name of the humanA: ";
	std::cin >> name;
	std::cout << "Enter the name of the weaponA: ";
	std::cin >> weap;
	if (name.empty() || weap.empty())
	{
		std::cout << "Empty inputs" << std::endl;
		return (0);
	}
	weaponA.setType(weap);
	HumanA	humanA(name, weaponA);

	std::cout << "Enter the name of the humanB: ";
	std::cin >> name;
	std::cout << "Enter the name of the weaponB: ";
	std::cin >> weap;
	if (name.empty())
	{
		std::cout << "Empty inputs" << std::endl;
		return (0);
	}
	HumanB	humanB(name);
	if (!weap.empty())
	{
		weaponB.setType(weap);
		humanB.setWeapon(weaponB);
	}
	humanA.attack();
	humanB.attack();
	return (0);
}
