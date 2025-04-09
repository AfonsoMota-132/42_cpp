/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:24:59 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/11 14:29:19 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Point.hpp"

float sign(Point point, Point p1, Point p2)
{
	return (point.getX().toFloat() - p1.getX().toFloat()) *
		(p1.getY().toFloat() - p2.getY().toFloat()) -
		(p1.getX().toFloat() - p2.getX().toFloat()) *
		(point.getY().toFloat() - p2.getY().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool has_neg, has_pos;
	
	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);
	
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return !(has_neg && has_pos);
}
