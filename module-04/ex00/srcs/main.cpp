/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:30:05 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/12 12:03:57 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"

int main(void) {
  std::cout << "Animal Part" << std::endl << std::endl;
  const Animal *Meta = new Animal();

  std::cout << "Animal's meta type: " << Meta->GetType() << std::endl;
  Meta->MakeSound();
  delete Meta;

  std::cout << std::endl << "Cat's Part" << std::endl << std::endl;
  const Animal *MCat = new Cat();
  std::cout << "Cats's MCat type: " << MCat->GetType() << std::endl;
  MCat->MakeSound();
  delete MCat;

  std::cout << std::endl << "Dog's Part" << std::endl << std::endl;
  const Animal *MDog = new Dog();
  std::cout << "Dog's MCat type: " << MDog->GetType() << std::endl;
  MDog->MakeSound();
  delete MDog;
}
