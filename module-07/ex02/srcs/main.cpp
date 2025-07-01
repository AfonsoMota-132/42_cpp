/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:38:36 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 15:13:06 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Array.hpp"

#define MAX_NUM 500

int main(void) {
  Array<int> intArr(MAX_NUM);
  for (size_t i = 0; i < MAX_NUM; i++) {
    int value = rand() % MAX_NUM;
    intArr[i] = value;
  }
  for (size_t i = 0; i < MAX_NUM; i++)
    std::cout << i << "\t" << intArr[i] << std::endl;
  Array<int> tmp;
  try {
    for (size_t i = 0; i < MAX_NUM; i++) {
      std::cout << tmp[i] << std::endl;
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    std::cerr << "Caught an exception" << std::endl;
  }
  tmp = intArr;
  for (size_t i = 0; i < MAX_NUM; i++) {
    std::cout << i << "\t" << tmp[i] << std::endl;
  }
  Array<int> test(tmp);
  try {
    for (size_t i = 0; i < MAX_NUM; i++) {
      if (tmp[i] != test[i]) {
        std::cerr << "Error: tmp[" << i << "] = " << tmp[i] << " != test[" << i
                  << "] = " << test[i] << std::endl;
        return 1;
      }
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    std::cerr << "Caught an exception" << std::endl;
  }
  std::cout << "test[1]: " << test[1] << std::endl;
  std::cout << "tmp[1]: " << tmp[1] << std::endl;
  test[1] = 123456789;
  std::cout << "test[1]: " << test[1] << std::endl;
  std::cout << "tmp[1]: " << tmp[1] << std::endl;
}
