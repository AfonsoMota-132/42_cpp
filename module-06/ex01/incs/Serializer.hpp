/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:52:26 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 11:06:31 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"

class Serializer {
private:
  Serializer(void);
  Serializer(const Serializer &other);
  Serializer &operator=(const Serializer &other);
  ~Serializer(void);

public:
	static uintptr_t Serialize(Data *ptr);
	static Data	*Deserialize(uintptr_t raw);
};

#endif
