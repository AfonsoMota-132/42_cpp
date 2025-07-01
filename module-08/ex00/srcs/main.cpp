/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:05:46 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 21:36:16 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"

int main() {
  std::vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(42);

  std::list<int> lst;
  lst.push_back(5);
  lst.push_back(42);
  lst.push_back(100);

  try {
    easyfind(vec, 42);
    easyfind(vec, 20);
    easyfind(vec, 10);
    easyfind(vec, 2000);
  } catch (const std::exception &e) {
    std::cerr << "Vector error: " << e.what() << std::endl;
  }

  try {
    easyfind(lst, 42);
    easyfind(lst, 5);
    easyfind(lst, 100);
    easyfind(lst, 42);
    easyfind(lst, -42);
  } catch (const std::exception &e) {
    std::cerr << "List error: " << e.what() << std::endl;
  }
  return 0;
}
