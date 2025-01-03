/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:16:09 by afogonca          #+#    #+#             */
/*   Updated: 2025/01/03 10:21:48 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {
	private:
	void	Debug(void);
	void	Info(void);
	void	Warning(void);
	void	Error(void);

	public:
	Harl(void);
	~Harl(void);
	void	Complain(std::string level);
};

#endif
