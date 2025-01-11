/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:54:44 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/11 14:02:04 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(const Fixed _x, const Fixed _y);
		Point(const Point &cpy);
		Point &operator=(const Point &cpy);
		~Point(void);
		
		Fixed const &getX(void) const;
		Fixed const &getY(void) const;
};

float area(Point const a, Point const b, Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
