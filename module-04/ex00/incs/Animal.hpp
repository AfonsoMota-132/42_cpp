/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:50:47 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/12 11:56:26 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
  std::string Type;

public:
  // Orthodox Canonical Form
  Animal(void);
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  virtual ~Animal(void);

  // Getters and Setters
  std::string GetType(void) const;
  void SetType(const std::string &type);

  // Class Methods
  virtual void MakeSound(void) const;
};
#endif
