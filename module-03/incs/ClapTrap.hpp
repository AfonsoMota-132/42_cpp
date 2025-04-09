/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:21:14 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/09 19:39:45 by afogonca         ###   ########.fr       */
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

		void	Attack(const std::string& target)
};
#endif
