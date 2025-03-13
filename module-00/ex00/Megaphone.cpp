/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:24:21 by afogonca          #+#    #+#             */
/*   Updated: 2024/11/24 20:27:48 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

size_t		ft_strlen(char *str);

class Megaphone{
	public:
	Megaphone();
	Megaphone(char *str);
	Megaphone(Megaphone const &megaphone);
	~Megaphone();
	char	*getStr(void) const {return (this->str);};
	size_t	getSize(void) const {return (this->size);};
	size_t	ft_find_st_no(std::string str) const;
	size_t	ft_find_last_no(std::string str) const;
	void	ft_substr(size_t start, size_t end);
	void	setStr(char *str);
	void	append(char *str);
	void	append_clean(char *str);
	private:
	char	*str;
	size_t	size;
};

std::ostream& operator<<(std::ostream&, const Megaphone megaphone)
{
	if (megaphone.getStr())
		std::cout << megaphone.getStr();
	else
		std::cout << "(NULL)";
	return (std::cout);
}

Megaphone::Megaphone(){
	this->str = NULL;
	this->size = 0;
};

Megaphone::Megaphone(Megaphone const &megaphone){
	if (this == &megaphone)
		return ;
	this->str = NULL;
	this->setStr(megaphone.getStr());
}
Megaphone::Megaphone(char *str){
	this->str = new char[ft_strlen(str) + 1];
	this->size = ft_strlen(str);
	for (size_t i = 0; i < this->size; i++)
		this->str[i] = std::toupper(str[i]);
	this->str[this->size] = '\0';
};

Megaphone::~Megaphone(){
	if (this->str)
		delete[] this->str;
};

void	Megaphone::setStr(char *str){
	if (!str)
	{
		this->str = NULL;
		this->size = 0;
		return ;
	}
	if (this->str)
		delete[] this->str;
	this->str = new char[ft_strlen(str) + 1];
	this->size = ft_strlen(str);
	for (size_t i = 0; i < this->size; i++)
		this->str[i] = std::toupper(str[i]);
	this->str[this->size] = '\0';
}

size_t	Megaphone::ft_find_st_no(std::string str) const{
	size_t	x = 0;
	size_t	y = 0;
	size_t	count;

	while (this->str[x])
	{
		y = -1;
		count = 0;
		while (str[++y])
			if (this->str[x] == str[y])
				count++;
		if (!count)
			return (x);
		x++;
	}
	return (x);
}

size_t	Megaphone::ft_find_last_no(std::string str) const{
	size_t	x = this->size - 1;
	size_t	y = 0;
	size_t	count;

	while (this->str[x])
	{
		y = -1;
		count = 0;
		while (str[++y])
			if (this->str[x] == str[y])
				count++;
		if (!count)
			return (x);
		x--;
	}
	return (x);
}

void	Megaphone::ft_substr(size_t start, size_t end){
	char *tmp;

	if (start >= end || this->size == 0)
		return ;
	if (end > this->size)
		end = this->size;
	tmp = new char[end - start + 1];
	tmp[end - start] = '\0';
	for (size_t i = start; i < end; i++)
		tmp[i - start] = this->str[i];
	this->setStr(tmp);
	delete[] tmp;
}

void	Megaphone::append(char *str){
	char	*tmp;
	size_t	x = 0;

	tmp = new char[this->size + ft_strlen(str) + 1];
	tmp[ft_strlen(str) + this->size] = '\0';
	for (size_t i = 0; i < this->size; i++)
		tmp[i] = this->str[i];
	for (size_t i = this->size; i < (this->size + ft_strlen(str)); i++)
		tmp[i] = str[x++];
	this->setStr(tmp);
	delete[] tmp;
}

void	Megaphone::append_clean(char *str){
	Megaphone tmp(str);
	char	tmp2[2] = " ";
	tmp.ft_substr(tmp.ft_find_st_no(" \t"), tmp.ft_find_last_no(" \t") + 1);
	this->append(tmp2);
	this->append(tmp.getStr());
}

int	main(int ac, char **av)
{
	Megaphone	megaphone;

	if (ac >= 2)
	{
		megaphone.setStr(av[1]);
		megaphone.ft_substr(megaphone.ft_find_st_no(" \t"), megaphone.ft_find_last_no(" \t") + 1);
		for (int i = 2; i < ac; i++)
			megaphone.append_clean(av[i]);
		std::cout << megaphone << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	/*Megaphone megaphone3(megaphone);*/
	/*std::cout << megaphone3 << std::endl;*/
	/*return (0);*/
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
