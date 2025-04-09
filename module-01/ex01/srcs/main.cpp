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
	std::size_t nbr;

	std::cout << "Enter the name of the zombie: ";
	std::cin >> name;
	std::cout << "Enter number of zombifes: ";
	std::cin >> input;
	if (!ft_is_nbr(input))
		return (1);
	nbr = ft_atoi(input);
	std::cout << nbr << std::endl;
	Zombie	*horde = zombieHorde(nbr, name);
	for (std::size_t i = 0; i < nbr; i++)
	{
		std::cout << "index " << i << " ";
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}

int	ft_atoi(const std::string& str)
{
	int		result = 0;
	int		mult = 1;
	size_t	i = 0;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (i < str.length() && std::isdigit(str[i]))
	{
		result = result * 10 + static_cast<int>(str[i] - '0');
		i++;
	}
	return (result * mult);
}

int	ft_is_nbr(std::string str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0' && str[i] != '\n')
	{
		if (!(str[i] >= '0' && str[i] < '9'))
		{
			std::cout << str << " is not a number" << std::endl;
			return (0);
		}
	}
	return (1);
}
