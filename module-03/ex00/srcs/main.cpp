/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:19:46 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/11 09:44:22 by afogonca         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

int main(void) {
  ClapTrap Test1("Test1");
  ClapTrap Test2(Test1);
  ClapTrap Test3 = Test1;
  Test2.SetName("Test2");
  Test3.SetName("Test3");

  std::cout << "TEST1" << std::endl << std::endl;
  Test1.TakeDamage(9);
  Test1.BeRepaired(1);
  Test1.BeRepaired(10);
  for (int i = 0; i < 4; i++)
    Test1.TakeDamage(2);
  for (int i = 0; i < 10; i++)
    Test1.BeRepaired(1);
  std::cout << Test1.GetName() << " has " << Test1.GetEp() << " Ep!"
            << std::endl;
  std::cout << std::endl << std::endl << "TEST2" << std::endl << std::endl;
  Test2.TakeDamage(11);
  Test2.BeRepaired(1);
  Test2.BeRepaired(10);
  for (int i = 0; i < 4; i++)
    Test2.TakeDamage(2);
  for (int i = 0; i < 10; i++)
    Test2.BeRepaired(1);
  std::cout << std::endl << std::endl << "TEST3" << std::endl << std::endl;
  Test3.TakeDamage(1);
  Test3.BeRepaired(1);
  Test3.BeRepaired(10);
  for (int i = 0; i < 4; i++)
    Test3.TakeDamage(2);
  for (int i = 0; i < 10; i++)
    Test3.BeRepaired(1);
}
