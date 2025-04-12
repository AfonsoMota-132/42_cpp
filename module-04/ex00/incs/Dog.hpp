/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:59:40 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/12 12:00:36 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog(void);
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  ~Dog();

  void MakeSound() const;
};
#endif
