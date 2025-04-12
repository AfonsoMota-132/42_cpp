/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:33:56 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/12 12:00:10 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
  Cat(void);
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  ~Cat();

  void MakeSound() const;
};

#endif
