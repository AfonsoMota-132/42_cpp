/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:24:21 by afogonca          #+#    #+#             */
/*   Updated: 2024/11/24 20:27:48 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	std::string	trimmed;
	std::string	lowered;

	trimmed = ft_trim(str);
	len = trimmed.length();
	for(int i = -1; i < len; ++i)
		lowered += std::toupper(trimmed[i]);
	return (lowered);
}

int	main(int ac, char **av)
{
	std::string output;

	if (ac >= 2)
	{
		for (int i = 1; i < ac; i++)
		{
			output.append(ft_capitalize(av[i]) + " ");
		}
	}
	else
		output.append("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	
	std::cout << output << std::endl;
}
