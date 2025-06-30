/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:17:40 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 12:23:19 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base {
public:
  virtual ~Base(void);
};

Base *Generate(void);
void Identify(Base *p);
void Identify(Base &p);

#endif
