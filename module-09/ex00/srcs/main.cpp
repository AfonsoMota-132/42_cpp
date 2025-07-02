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

int main(void) {
  try {
    BitcoinExchange idk1;
	idk1.exchange("input.txt");
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return (0);
}
