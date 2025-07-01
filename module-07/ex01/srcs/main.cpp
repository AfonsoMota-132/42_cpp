/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:50:02 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 13:57:26 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/iter.hpp"

void FtToUpper(char &c) { c = std::toupper(static_cast<unsigned char>(c)); }

void FtToLower(char &c) { c = std::tolower(static_cast<unsigned char>(c)); }

int main(int ac, char **av) {
  for (int j = 1; j < ac; j++) {
    ::iter(av[j], std::strlen(av[j]), FtToUpper);
    std::cout << "Upper" << std::endl;
    std::cout << av[j] << std::endl;
    ::iter(av[j], std::strlen(av[j]), FtToLower);
    std::cout << "Lower" << std::endl;
    std::cout << av[j] << std::endl;
    if (j + 1 != ac)
      std::cout << std::endl;
  }
  return (0);
}
