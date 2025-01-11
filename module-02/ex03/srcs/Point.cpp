/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:04:33 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/11 14:09:12 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const Fixed _x, const Fixed _y): x(_x), y(_y){}

Point::Point(const Point &cpy)
{
	*this = cpy;
}

Point &Point::operator=(const Point &cpy)
{
	const_cast<Fixed &>(this->x) = cpy.x;
	const_cast<Fixed &>(this->y) = cpy.y;
	return (*this);
}

Point::~Point(void) {}

Fixed const &Point::getX(void) const
{
	return (this->x);
}

Fixed const &Point::getY(void) const
{
	return (this->y);
}
