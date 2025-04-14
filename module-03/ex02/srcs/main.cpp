/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:19:46 by afogonca          #+#    #+#             */
/*   Updated: 2025/04/11 10:28:27 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/ScavTrap.hpp"
#include "../incs/FragTrap.hpp"
#include <iostream>

int main() {
  std::cout << "\n=== Creating FragTrap (default) ===" << std::endl;
  FragTrap ft1;
  ft1.Attack("Vampire");
  ft1.TakeDamage(50);
  ft1.BeRepaired(30);
  ft1.highFivesGuys();

  std::cout << "\n=== Creating FragTrap (named) ===" << std::endl;
  FragTrap ft2("Fraggy");
  ft2.Attack("Zombie");
  ft2.TakeDamage(20);
  ft2.BeRepaired(10);
  ft2.highFivesGuys();

  std::cout << "\n=== Done ===" << std::endl;
  // std::cout << "\n=== Creating ClapTrap ===" << std::endl;
  // ClapTrap ct("Clappy");
  // ct.Attack("TargetDummy");
  // ct.TakeDamage(5);
  // ct.BeRepaired(3);
  //
  // std::cout << "\n=== Creating ScavTrap (default) ===" << std::endl;
  // ScavTrap st1;
  // st1.Attack("Goblin");
  // st1.TakeDamage(30);
  // st1.BeRepaired(20);
  // st1.guardGate();
  //
  // std::cout << "\n=== Creating ScavTrap (named) ===" << std::endl;
  // ScavTrap st2("Scavvy");
  // st2.Attack("Orc");
  // st2.TakeDamage(15);
  // st2.BeRepaired(10);
  // st2.guardGate();
  //
  // std::cout << "\n=== Done ===" << std::endl;

  // ClapTrap Test1("Test1");
  // ClapTrap Test2(Test1);
  // ClapTrap Test3 = Test1;
  // Test2.SetName("Test2");
  // Test3.SetName("Test3");

  return (1);
  // std::cout << "TEST1" << std::endl << std::endl;
  // Test1.TakeDamage(9);
  // Test1.BeRepaired(1);
  // Test1.BeRepaired(10);
  // for (int i = 0; i < 4; i++)
  //   Test1.TakeDamage(2);
  // for (int i = 0; i < 10; i++)
  //   Test1.BeRepaired(1);
  // std::cout << Test1.GetName() << " has " << Test1.GetEp() << " Ep!"
  //           << std::endl;
  // std::cout << std::endl << std::endl << "TEST2" << std::endl << std::endl;
  // Test2.TakeDamage(11);
  // Test2.BeRepaired(1);
  // Test2.BeRepaired(10);
  // for (int i = 0; i < 4; i++)
  //   Test2.TakeDamage(2);
  // for (int i = 0; i < 10; i++)
  //   Test2.BeRepaired(1);
  // std::cout << std::endl << std::endl << "TEST3" << std::endl << std::endl;
  // Test3.TakeDamage(1);
  // Test3.BeRepaired(1);
  // Test3.BeRepaired(10);
  // for (int i = 0; i < 4; i++)
  //   Test3.TakeDamage(2);
  // for (int i = 0; i < 10; i++)
  //   Test3.BeRepaired(1);
}
