/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:05:00 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/11 10:05:53 by afogonca         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
  std::string Name;
  unsigned int Hp;
  unsigned int Ep;
  unsigned int Ad;

public:
  ClapTrap(void);
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);
  ~ClapTrap();

  std::string GetName(void) const;
  unsigned int GetHp(void) const;
  unsigned int GetEp(void) const;
  unsigned int GetAd(void) const;
  bool GetStatus(int ep) const;
  void SetName(std::string name);

  void Attack(const std::string &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);
};
#endif
