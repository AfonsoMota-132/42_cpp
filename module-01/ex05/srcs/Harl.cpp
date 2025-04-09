/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:17:48 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/03 10:37:42 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

Harl::Harl(void) {};

Harl::~Harl(void) {};

void	Harl::Debug(void) {
	std::cout << "I love having extra bacon for";
	std::cout << "my 7XL-double-cheese-triple-pickle";
	std::cout << "-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::Info(void) {
	std::cout << "I cannot believe adding extra bacon";
	std::cout << "costs more money. You didn’t put";
	std::cout << "enough bacon in my burger! If you";
	std::cout << "did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::Warning(void) {
	std::cout << "I think I deserve to have some extra";
	std::cout << "bacon for free. I’ve been coming for";
	std::cout << "years whereas you started working";
	std::cout << "here since last month." << std::endl;
}

void	Harl::Error(void) {
	std::cout << "This is unacceptable! I want to";
	std::cout << "take some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas";
	std::cout << "you started working here since last";
	std::cout << "month." << std::endl;
}

void	Harl::Complain(std::string level)
{
	void	(Harl::*funcs[4])(void) = 
		{&Harl::Debug, &Harl::Info, &Harl::Warning, &Harl::Error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (std::size_t i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*funcs[i])();
			break;
		}
	}
}
