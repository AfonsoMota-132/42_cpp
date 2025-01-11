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

#include "../incs/Fixed.hpp"

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
	const Fixed a(10.10f);
	const Fixed b(42.42f);
	const Fixed c(4);
	Fixed d = a + b;
	std::cout << "Float a: " << a << std::endl;
	std::cout << "Float b: " << b << std::endl;
	std::cout << "Float c: " << c << std::endl;

	std::cout << "A > B: ";
	if(a > b)
		std::cout << "true";
	else
		std::cout << "false";
	std::cout << std::endl;
	std::cout << "A < B: ";
	if(a < b)
		std::cout << "true";
	else
		std::cout << "false";
	std::cout << std::endl;

	std::cout << "A >= B: ";
	if(a >= b)
		std::cout << "true";
	else
		std::cout << "false";
	std::cout << std::endl;
	std::cout << "A <= B: ";
	if(a <= b)
		std::cout << "true";
	else
		std::cout << "false";
	std::cout << std::endl;

	std::cout << "A == B: ";
	if(a == b)
		std::cout << "true";
	else
		std::cout << "false";
	std::cout << std::endl;
	std::cout << "A != B: ";
	if(a != b)
		std::cout << "true";
	else
		std::cout << "false";
	std::cout << std::endl;

	std::cout << "A + B: " << a + b << std::endl;
	std::cout << "A - B: " << a - b << std::endl;
	std::cout << "A * B: " << a * b << std::endl;
	std::cout << "A / B: " << a / 0 << std::endl;

	std::cout << "D++: " << d++;
	std::cout << "  D: " << d << std::endl;
	std::cout << "++D: " << ++d << std::endl;
	std::cout << "D: " << d << std::endl;
	std::cout << "D--: " << --d << std::endl;
	std::cout << "D--: " << d--;
	std::cout << "  D: " << d << std::endl;
	std::cout << "D: " << d << std::endl;

	std::cout << "Min: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max: " << Fixed::max(a, b) << std::endl;
	return (0);
}
