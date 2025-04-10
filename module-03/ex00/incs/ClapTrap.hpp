/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:05:00 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/10 11:05:03 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string		Name;
		unsigned int	Hp;
		unsigned int	Ep;
		unsigned int	Ad;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		std::string	GetName(void) const;
		unsigned int	GetHp(void) const;
		unsigned int	GetEp(void) const;
		unsigned int	GetAd(void) const;
		bool			GetStatus(void) const;

		void	Attack(const std::string& target);
};
#endif
