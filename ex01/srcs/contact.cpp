/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:26:48 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/20 10:47:13 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Phonebook.hpp"

Contact::Contact(void) {};

Contact::~Contact(void) {};

Contact::Contact(std::string First_Name, std::string Last_Name,
	 std::string Nickname, std::string Phone_Nbr, std::string Dark_Secret) {
	this->First_Name = First_Name;
	this->Last_Name = Last_Name;
	this->Nickname = Nickname;
	this->Phone_Nbr = Phone_Nbr;
	this->Dark_Secret = Dark_Secret;
}

void	Contact::print_all_info(void)
{
	std::cout << "First name:	" << this->First_Name << std::endl;
	std::cout << "Last name:	" << this->Last_Name << std::endl;
	std::cout << "Nickname:	" << this->Nickname << std::endl;
	std::cout << "Phone number:	" << this->Phone_Nbr << std::endl;
	std::cout << "Dark secret:	" << this->Dark_Secret << std::endl;
}

std::string	Contact::get_First_Name(void) { return (this->First_Name); };
std::string	Contact::get_Last_Name(void) { return (this->Last_Name); };
std::string	Contact::get_Nickname(void) { return (this->Nickname); };
