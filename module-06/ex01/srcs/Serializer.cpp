/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:56:55 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 11:14:41 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Serializer.hpp"

Serializer::Serializer(void) {};

Serializer::Serializer(const Serializer &other) { *this = other; }

Serializer &Serializer::operator=(const Serializer &other)
{
	if (this == &other)
		return *this;
	return *this;
}

uintptr_t Serializer::Serialize(Data *ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::Deserialize(uintptr_t raw) {
  return (reinterpret_cast<Data *>(raw));
}
