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
	for (unsigned long i = 0; i < 10; i++)
	{
		if (i == 9 && str.length() > 10)
		{
			std::cout << ".";
			break ;
		}
		if (i >= str.length())
			std::cout << " ";
		else
			std::cout << str[i];
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
			printf("%d is not a number\n", str[i]);
			return (0);
		}
	}
	return (1);
}

void	PhoneBook::search_contact(void)
{
	std::string	input;
	int	index;

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
	if (input.empty())
	{
		std::cout << "You didnt enter an index" << std::endl;
		return ;
	}
	if(!ft_is_nbr(input))
	{
		std::cout << ft_is_nbr(input) << std::endl;
		std::cout << input << "." << std::endl;
		std::cout << "Index is not a number" << std::endl;
		return ;
	}
	index = boost::lexical_cast<int>(input);
	if (index < 0 || index > 7)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	else if (this->Contacts[index].get_First_Name() == "")
	{
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	Contacts[index].print_all_info();
}

void	PhoneBook::add_contact(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	dark_secret;

	std::cout << "First name: " << std::endl;
	std::cin >> first_name;	
	std::cout << "Last name: " << std::endl;
	std::cin >> last_name;
	std::cout << "Nickname: " << std::endl;
	std::cin >> nickname;
	std::cout << "Phone number: " << std::endl;
	std::cin >> phone_number;
	std::cout << "Dark secret: " << std::endl;
	std::cin >> dark_secret;
	if (first_name.empty() || last_name.empty() || nickname.empty()
		|| phone_number.empty() || dark_secret.empty())
	{
		std::cout << "One or more fields are empty" << std::endl;
		return ;
	}
	this->Contacts[this->index] = Contact(first_name, last_name, nickname,
		phone_number, dark_secret);
	this->index = (this->index + 1) % 8;
}
