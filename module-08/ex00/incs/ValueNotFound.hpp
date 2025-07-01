/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueNotFound.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:15:19 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 21:34:31 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALUENOTFOUND_HPP
#define VALUENOTFOUND_HPP

#include <exception>

class ValueNotFound : public std::exception {
public:
  virtual const char *what() const throw();
};

const char *ValueNotFound::what() const throw() {
  return "The value was not found in the container";
};

#endif
