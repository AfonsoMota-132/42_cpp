/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:55:20 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/11 10:20:38 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  ~ScavTrap(void);

  void guardGate();
  void attack(const std::string &target); // Override
};

#endif
