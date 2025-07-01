/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:43:24 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 21:35:10 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include "ValueNotFound.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>

template <typename T> void easyfind(T Container, int Find) {
  typename T::iterator i;
  i = std::find(Container.begin(), Container.end(), Find);
  if (i == Container.end())
    throw ValueNotFound();
  std::cout << "Found the value> " << Find << " in the position > "
            << std::distance(Container.begin(), i) << std::endl;
};

#endif
