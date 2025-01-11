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

int	main(void)
{
	Fixed a;
	const Fixed b(42.42f);
	const Fixed c = b;
	std::cout << "Float a: " << a << std::endl;
	std::cout << "Float b: " << b << std::endl;
	std::cout << "Float c: " << c << std::endl;

	std::cout << "Int a: " << a.toInt() << std::endl;
	std::cout << "Int b: " << b.toInt() << std::endl;
	std::cout << "Int c: " << c.toInt() << std::endl;
	return (0);
}
