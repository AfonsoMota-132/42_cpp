/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:18:42 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/12 11:22:04 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"

Animal::Animal(void) : Type("Animal") {
  std::cout << "Animal's default constructor called!" << std::endl;
}

Animal::Animal(const Animal &other) {
  *this = other;
  std::cout << "Animal's copy constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->Type = other.Type;
	std::cout << "Animal's assignment operator called!" << std::endl;
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Animal's destructor called!" << std::endl;
}

std::string	Animal::GetType(void) const { return(this->Type); };

void	Animal::SetType(const std::string &type) {
	this->Type = type;
}

void	Animal::MakeSound(void) const {
	std::cout << "* RANDOM ANIMAL SOUNDS *" << std::endl;
}
