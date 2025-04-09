/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 09:51:23 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/11 10:30:55 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Point.hpp"

	/*Fixed a;*/
	/*Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );*/
	/*std::cout << a << std::endl;*/
	/*std::cout << ++a << std::endl;*/
	/*std::cout << a << std::endl;*/
	/*std::cout << a++ << std::endl;*/
	/*std::cout << a << std::endl;*/
	/*std::cout << b << std::endl;*/
	/*std::cout << Fixed::max( a, b ) << std::endl;*/
	/*return 0;*/

bool bsp(Point const a, Point const b, Point const c, Point const point);
int	main(void)
{
	const Point a(1.44f, 2.44f);
	const Point b(10.44f, 2.44f);
	const Point c(1.44f, 12.44f);
	const Point point(2.44f, 10.44f);

	std::cout << "a: x " <<a.getX() << std::endl;
	std::cout << "a: y " <<a.getY() << std::endl;
	std::cout << "b: x " <<b.getX() << std::endl;
	std::cout << "b: y " <<b.getY() << std::endl;
	std::cout << "c: x " <<c.getX() << std::endl;
	std::cout << "c: y " <<c.getY() << std::endl;
	std::cout << "point: x " <<point.getX() << std::endl;
	std::cout << "point: y " <<point.getY() << std::endl;

	if (bsp(a, b, c, point))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
	return (0);
}
