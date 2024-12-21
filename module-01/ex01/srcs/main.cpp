/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:51:20 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/21 10:01:47 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

int	main(void)
{
	std::string name;
	std::string input;

	std::cout << "Enter the name of the zombie: ";
	std::getline(std::cin, name);
	std::cout << "Enter number of zombifes: ";
	std::getline(std::cin, input);
	Zombie	*horde = zombieHorde(stoi(input), name);
	for (int i = 0; i < stoi(input); i++)
	{
		std::cout << "index " << i << " ";
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
