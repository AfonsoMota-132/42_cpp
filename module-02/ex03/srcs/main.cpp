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
int	main(void)
{
	const Point a(1.44f, 2.44f);

	std::cout << a.getX() << std::endl;
	std::cout << a.getY() << std::endl;
	return (0);
}
