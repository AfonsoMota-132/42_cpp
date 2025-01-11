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

Fixed::Fixed(void)
{
	value = 0;
};

Fixed::Fixed(const Fixed &other) 
{
	*this = other;
};

Fixed::Fixed(const int value)
{
	this->value = value * (1 << bits);
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << bits));
}

Fixed &Fixed::operator=(const Fixed &value)
{
	if (this != &value)
		this->value = value.getRawBits();
	return (*this);
};

Fixed::~Fixed(void)
{
};

int	Fixed::getRawBits(void) const {
	return (value);
};

void	Fixed::setRawBits(int const raw) {
	value = raw;
};

float Fixed::toFloat(void) const {
	return (static_cast<float>(this->value) / (1 << Fixed::bits));
}

int Fixed::toInt(void) const {
	return (this->value >> Fixed::bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator==(const Fixed &other) const {
	if (this->value == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &other) const {
	if (this->value != other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &other) const {
	if (this->value > other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &other) const {
	if (this->value >= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->value < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->value <= other.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed res;
	res.value = this->value + other.value;
	return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed res;
	res.value = this->value - other.value;
	return (res);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed res;
	res.value = this->value * other.value / (1 << Fixed::bits);
	return (res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed res;
	if (other.value == 0)
		return (0);
	res.value = this->value / other.value * (1 << Fixed::bits);
	return (res);
}

Fixed &Fixed::operator++(void) {
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed res = *this;
	this->value++;
	return (res);
}

Fixed &Fixed::operator--(void) {
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed res = *this;
	this->value--;
	return (res);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
