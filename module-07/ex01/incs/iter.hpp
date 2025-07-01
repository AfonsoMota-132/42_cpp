/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:55:33 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 13:56:10 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>
#include <iostream>

template<typename Tmp>
void iter(Tmp *array, size_t len, void (*F)(Tmp &))
{
	if  (!array || !F)
		return ;
	for (size_t i = 0; i < len; i++)
		F(array[i]);
}

#endif
