/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:27:28 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 11:30:16 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Base.hpp"
#include "../incs/A.hpp"
#include "../incs/B.hpp"
#include "../incs/C.hpp"

Base::~Base(void) {};

Base *Generate(void) {
  std::srand(time(NULL));

  switch (std::rand() % 3) {
  case 0:
    std::cout << "A CLASS GENERATED" << std::endl;
    return (new A());
  case 1:
    std::cout << "B CLASS GENERATED" << std::endl;
    return (new B());
  case 2:
    std::cout << "C CLASS GENERATED" << std::endl;
    return (new C());
  default:
    std::cout << "Error encountered on Base generate" << std::endl;
    exit(1);
  }
}

void Identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "*A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "*B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "*C" << std::endl;
  else
    std::cout << "*Type not identified" << std::endl;
}

void Identify(Base &p) {
  try {
    (void)dynamic_cast<A &>(p);
    std::cout << "&A" << std::endl;
    return;
  } catch (const std::exception &e) {
  }
  try {
    (void)dynamic_cast<B &>(p);
    std::cout << "&B" << std::endl;
    return;
  } catch (const std::exception &e) {
  }
  try {
    (void)dynamic_cast<C &>(p);
    std::cout << "&C" << std::endl;
    return;
  } catch (const std::exception &e) {
    std::cout << "&Type not identified" << std::endl;
  }
}
