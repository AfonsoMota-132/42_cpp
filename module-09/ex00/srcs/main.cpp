/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:22:15 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/02 15:27:05 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/BitcoinExchange.hpp"

int main(int ac, char **av) {
  if (ac == 2) {
    try {
      BitcoinExchange idk1;
      idk1.exchange(av[1]);
    } catch (const std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  } else {
    std::cerr << "Error!\nIncorrect Number of Arguments" << std::endl;
  }
  return (0);
}
