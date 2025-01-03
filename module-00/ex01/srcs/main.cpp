/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:09:14 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/20 10:44:04 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Phonebook.hpp"

std::string	ft_str_to_upper(std::string str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	phonebook = PhoneBook();
	while (1)
	{
		phonebook.menu();
		std::cin >> command;
		command = ft_str_to_upper(command);
		if (command == "ADD")
			phonebook.add_contact();
		if (command == "SEARCH")
			phonebook.search_contact();
		if (command == "EXIT")
			break ;
	}
	return (0);
}
