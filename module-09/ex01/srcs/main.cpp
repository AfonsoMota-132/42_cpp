/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:59:01 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/04 11:02:04 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RPN.hpp"

int main(int ac, char **av) {
  if (ac == 2) {
    RPN::rpn(av[1]);
  } else {
    std::cerr << "Error!\nNot Enough Arguments!" << std::endl;
  }
  return (0);
}
