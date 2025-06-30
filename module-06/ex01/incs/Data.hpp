/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:45:38 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 11:13:53 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

struct Data {
  std::string Name;
  double Mass;
  double ForceX;
  double ForceY;
  double Velocity;
  int Id;
  double Temp;
  bool IsActive;
};

#endif
