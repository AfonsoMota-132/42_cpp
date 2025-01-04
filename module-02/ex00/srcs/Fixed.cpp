/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:39:59 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/03 11:47:38 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

Fixed::Fixed(void) {
	value = 0;
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &other) {
	*this = other;
};

Fixed &Fixed::operator=(const Fixed &value) {
	this->value = value.getRawBits();
	return (*this);
};

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
};
