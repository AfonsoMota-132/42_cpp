/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:29:14 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 08:52:57 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename Tmp>
void swap(Tmp &A, Tmp &B)
{
	Tmp Swap;
	Swap = A;
	A = B;
	B = Swap;
};
template <typename Tmp>
Tmp min(Tmp &A, Tmp &B)
{
	if (A < B)
		return (A);
	return (B);
};
template <typename Tmp>
Tmp max(Tmp &A, Tmp &B)
{
	if (A > B)
		return (A);
	return (B);
};
#endif
