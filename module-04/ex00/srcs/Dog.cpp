/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:00:47 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/12 12:02:50 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog(void) {
  this->SetType("Dog");
  std::cout << "Dog's default constructor called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
  *this = other;
  std::cout << "Dog's copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
  if (this != &copy)
    Animal::operator=(copy);
  std::cout << "Dog's assignment operator called!" << std::endl;
  return (*this);
}
Dog::~Dog(void) { std::cout << "Dog's destructor called!" << std::endl; }

void Dog::MakeSound() const {
  std::cout << "Ruuf Ruuf * random dog noises *" << std::endl;
}
