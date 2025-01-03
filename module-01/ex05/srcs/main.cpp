/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:23:28 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/03 10:37:30 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

std::string ft_trim(std::string str)
{
	size_t	start;
	size_t	end;
	std::string	string;

	start = str.find_first_not_of(' ');
	end = str.find_last_not_of(' ');
	string = str.substr(start, end - start + 1);
	return (string);
}

std::string	ft_capitalize(std::string str)
{
	int		len;
	std::string	lowered;

	len = str.length();
	for(int i = 0; i < len; i++)
		lowered += std::toupper(str[i]);
	return (lowered);
}

int	main(void)
{
	Harl Harl;
	std::string input;
	std::string test;

	std::cout << "Enter a level: ";
	std::cin >> input;
	input = ft_capitalize(input);
	Harl.Complain(input);
	return (0);
}
