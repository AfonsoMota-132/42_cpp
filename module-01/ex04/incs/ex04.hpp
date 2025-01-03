/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:38:33 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/22 12:02:15 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_HPP
# define EX04_HPP

#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>

int			ft_check_args(int ac, char **av);
void		ft_create_file(std::string name, std::string content);
std::string ft_readfile(std::string name);
std::string	ft_replace(std::string line, std::string s1, std::string s2);

#endif
