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

void	ft_signal(int sig)
{
	std::cout << "\n[Interrupt detected — exiting...]" << std::endl;
	close (0);
}
int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	phonebook = PhoneBook();
	std::signal(SIGINT, &ft_signal);
	while (1)
	{
		phonebook.menu();
		std::cin >> command;
		if (!command.size())
			return (1);
		command = ft_str_to_upper(command);
		if (command == "ADD")
			if (phonebook.add_contact())
				return (1);
		if (command == "SEARCH")
			if (phonebook.search_contact())
				return (1);
		if (command == "EXIT")
			break ;
		command.clear();
	}
	return (0);
}
