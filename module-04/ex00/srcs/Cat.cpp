/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:36:17 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/12 11:52:48 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat(void) {
  this->SetType("Cat");
  std::cout << "Cat's default constructor called!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  *this = other;
  std::cout << "Cat's copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
  if (this != &copy)
    Animal::operator=(copy);
  std::cout << "Cat's assignment operator called!" << std::endl;
  return (*this);
}
Cat::~Cat(void) { std::cout << "Cat's destructor called!" << std::endl; }

void Cat::MakeSound() const {
  std::cout << "* PURRRRR * Wi Wi Wi ... Wa Wa ... Meow ... Nya" << std::endl;
}
