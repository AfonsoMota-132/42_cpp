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
	std::cout << "==>	Add" << std::endl;
	std::cout << "==>	Search" << std::endl;
	std::cout << "==>	Exit" << std::endl;
	std::cout << "Enter a command: ";
}

int		PhoneBook::is_print(std::string str)
{
	for (int i = 0; i < 10; i++)
	{
		
	}
	return (0);
}

void	print_search(std::string str)
{
	std::cout << "|";
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && str.length() > 10)
		{
			std::cout << ".";
			break ;
		}	
		std::cout << str[i];
	}
}

void	PhoneBook::search_contact(void)
{
	std::string	input;

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
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "You didnt enter an index" << std::endl;
		return ;
	}
	int index = std::stoi(input);
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
	std::getline(std::cin, first_name);
	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "Dark secret: " << std::endl;
	std::getline(std::cin, dark_secret);
	if (first_name.empty() || last_name.empty() || nickname.empty()
		|| phone_number.empty() || dark_secret.empty())
	{
		std::cout << "One or more fields are empty" << std::endl;
		return ;
	}
	if	(is_print(first_name) || is_print(last_name) || is_print(nickname)
		|| is_print(phone_number) || is_print(dark_secret))
	{
		std::cout << "One or more fields contain invalid characters" << std::endl;
		return ;
	}
	this->Contacts[this->index] = Contact(first_name, last_name, nickname,
		phone_number, dark_secret);
	this->index = (this->index + 1) % 8;
}
