/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:12:14 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/20 10:52:18 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Phonebook.hpp"

PhoneBook::PhoneBook(void) {this->index = 0;};

PhoneBook::~PhoneBook(void) {};

void	PhoneBook::menu(void)
{
	std::cout << "====================" << std::endl;
	std::cout << "   	Add" << std::endl;
	std::cout << "   	Search" << std::endl;
	std::cout << "   	Exit" << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << "Enter a command: "<< std::endl;
}

void	print_search(std::string str)
{
	std::cout << "|";
	int	j = 0;

	for (unsigned long i = 0; i < 10; i++)
	{
		if (i == 9 && str.length() > 10)
		{
			std::cout << ".";
			break ;
		}
		if (i + str.length() < 10)
			std::cout << " ";
		else
			std::cout << str[j++];
	}
}

int	ft_is_nbr(std::string str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0' && str[i] != '\n')
	{
		std::cout << str[i] << std::endl;
		if (!(str[i] >= '0' && str[i] < '9'))
		{
			std::cout << str[i] << " is not a number" << std::endl;
			return (0);
		}
	}
	return (1);
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
int	PhoneBook::search_contact(void)
{
	std::string	input;
	int	index;

	if (this->Contacts[0].get_First_Name().empty())
	{
		std::cout << "No contacts found to index" << std::endl;
		return (0);
	}
	for(int i = 0; i < 8; i++)
	{
		if (this->Contacts[i].get_First_Name() != "")
		{
			std::cout << "Index:   " << i;
			print_search(this->Contacts[i].get_First_Name());
			print_search(this->Contacts[i].get_Last_Name());
			print_search(this->Contacts[i].get_Nickname());
		}
		else
			break ;
		std::cout << std::endl;
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> input;
	if (!input.size())
		return (1);
	if (input.empty())
	{
		std::cout << "You didnt enter an index" << std::endl;
		return (0);
	}
	if(!ft_is_nbr(input))
	{
		std::cout << input;
		std::cout << " Input is not a number" << std::endl;
		return (0);
	}
	index = ft_atoi(input);
	if (index < 0 || index > 7)
	{
		std::cout << "Invalid index" << std::endl;
		return (0);
	}
	else if (this->Contacts[index].get_First_Name() == "")
	{
		std::cout << "Contact not found" << std::endl;
		return (0);
	}
	Contacts[index].print_all_info();
	return (0);
}

int	PhoneBook::add_contact(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	dark_secret;

	std::cout << "First name: " << std::endl;
	std::cin >> first_name;	
	if (!first_name.size())
		return (1);
	std::cout << "Last name: " << std::endl;
	std::cin >> last_name;
	if (!last_name.size())
		return (1);
	std::cout << "Nickname: " << std::endl;
	std::cin >> nickname;
	if (!nickname.size())
		return (1);
	std::cout << "Phone number: " << std::endl;
	std::cin >> phone_number;
	if (!phone_number.size())
		return (1);
	std::cout << "Dark secret: " << std::endl;
	std::cin >> dark_secret;
	if (!dark_secret.size())
		return (1);
	if (first_name.empty() || last_name.empty() || nickname.empty()
		|| phone_number.empty() || dark_secret.empty())
	{
		std::cout << "One or more fields are empty" << std::endl;
		return (0);
	}
	this->Contacts[this->index] = Contact(first_name, last_name, nickname,
		phone_number, dark_secret);
	this->index = (this->index + 1) % 8;
	return (0);
}
