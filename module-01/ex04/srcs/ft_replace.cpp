/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:19:58 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/23 11:20:44 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ex04.hpp"

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
	std::string	temp;
	unsigned long	start;
	unsigned long	pos = 0;

	start = 0;
	pos = 0;
	while ((pos = line.find(s1, start)) != std::string::npos && line[pos])
	{
		temp.append(line, start, pos - start);
		temp.append(s2);
		start =	pos + s1.length();
	}
	temp.append(line, start, line.length() - start);
	return (temp);
}

void		ft_create_file(std::string name, std::string content)
{
	std::string filename;
	filename.append(name, 0, name.rfind("."));
	filename.append(".replace");
	std::ofstream file(filename.c_str());
	file << content;
	file.close();
}
