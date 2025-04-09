/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:54:27 by afogonca          #+#    #+#             */
/*   Updated: 2024/11/25 10:01:36 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <csignal>

class Contact {
	private:
	std::string	First_Name;
	std::string	Last_Name;
	std::string	Nickname;
	std::string	Phone_Nbr;
	std::string Dark_Secret;
	public:
	Contact();
	~Contact();
	Contact(std::string First_Name, std::string Last_Name,
		 std::string Nickname, std::string Phone_Nbr, std::string Dark_Secret);
	void		print_all_info(void);
	std::string	get_First_Name(void);
	std::string	get_Last_Name(void);
	std::string get_Nickname(void);
};

class PhoneBook {
	private:
		Contact		Contacts[8];
		int	index;
	public:
		PhoneBook();
		~PhoneBook();
		int		add_contact(void);
		int		search_contact(void);
		static void	menu(void);
};
#endif
