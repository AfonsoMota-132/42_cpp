/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:39:14 by afogonca          #+#    #+#             */
/*   Updated: 2024/12/23 11:20:40 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ex04.hpp"

int main(int ac, char **av)
{
	std::string file;

	if (ft_check_args(ac, av))
		return (1);
	file = ft_readfile(av[1]);
	file = ft_replace(file, av[2], av[3]);
	ft_create_file(av[1], file);
	return (0);
}

std::string ft_readfile(std::string name)
{
	std::ifstream	file;
	std::string		content;
	std::string		buffer;
	
	file.open(name.c_str());
	if (!file.is_open())
	{
		std::cout << "Couldn't open file" << std::endl;
		return (NULL);
	}
	else
	{
		while (std::getline(file, buffer))
		{
			if (buffer.find("\0"))
				content += buffer;
			else
				content += buffer + "\n";
		}
	}
	return (content);
}

int	ft_file_exists(const std::string& name)
{
	return ( access( name.c_str(), F_OK ) != -1 );
}

int	ft_check_args(int ac, char **av)
{
	struct stat s;

	if (ac != 4)
	{
		std::cout << "Not enogugh Args" << std::endl;
		return (1);
	}
	if (!ft_file_exists(av[1]))
	{
		std::cout << "File doesn't exist" << std::endl;
		return (1);
	}
	stat(av[1],&s);
	if(s.st_mode & S_IFDIR )
    {
		std::cout << "Path sent is a directory!" << std::endl;
		return (1);
    }
	return (0);
}
