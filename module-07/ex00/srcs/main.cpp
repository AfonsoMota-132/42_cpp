/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:51:41 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/01 09:04:44 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/whatever.hpp"

int main(void) {
  int a = 651;
  int b = 6;
  std::cout << "Swap" << std::endl;
  std::cout << std::endl;
  std::cout << "Swap for ints" << std::endl;
  std::cout << std::endl;
  std::cout << "BEFORE SWAP:\ta = " << a << " b = " << b << std::endl;
  ::swap<int>(a, b);
  std::cout << "AFTER SWAP:\ta = " << a << " b = " << b << std::endl;
  ::swap<int>(a, b);
  std::cout << "AFTER SWAP2:\ta = " << a << " b = " << b << std::endl;
  std::cout << std::endl;
  std::cout << "Swap for strings" << std::endl;
  std::cout << std::endl;
  std::string c = "Hello, ";
  std::string d = " World!";
  std::cout << "BEFORE SWAP:\tc = " << c << " d = " << d << std::endl;
  ::swap<std::string>(c, d);
  std::cout << "AFTER SWAP:\tc = " << c << " d = " << d << std::endl;
  ::swap<std::string>(c, d);
  std::cout << "AFTER SWAP2:\tc = " << c << " d = " << d << std::endl;
  std::cout << std::endl;
  std::cout << "Swap for bool" << std::endl;
  std::cout << std::endl;
  bool e = true;
  bool f = false;
  std::cout << "BEFORE SWAP:\tc = " << e << " d = " << f << std::endl;
  ::swap<bool>(e, f);
  std::cout << "AFTER SWAP:\tc = " << e << " d = " << f << std::endl;
  ::swap<bool>(e, f);
  std::cout << "AFTER SWAP2:\tc = " << e << " d = " << f << std::endl;

  std::cout << std::endl << std::endl;
  std::cout << "Min" << std::endl;
  std::cout << std::endl << std::endl;
  std::cout << "Min for ints" << std::endl;
  std::cout << std::endl;
  std::cout << "a = " << a << " b = " << b << " Min: " << ::min<int>(a, b)
            << std::endl;
  a = 6;
  std::cout << "a = " << a << " b = " << b << " Min: " << ::min<int>(a, b)
            << std::endl;
  a = 651;
  std::cout << std::endl;
  std::cout << "Min for string" << std::endl;
  std::cout << std::endl;
  std::cout << "c = " << c << " d = " << d << " Min: " << ::min<std::string>(c, d)
            << std::endl;
  c = " World!";
  std::cout << "c = " << c << " d = " << d << " Min: " << ::min<std::string>(c, d)
            << std::endl;
  c = "Hello, ";
  std::cout << std::endl;
  std::cout << "Min for bool" << std::endl;
  std::cout << std::endl;
  std::cout << "e = " << e << " f = " << f << " Min: " << ::min<bool>(e, f)
            << std::endl;
  e = false;
  std::cout << "e = " << e << " f = " << f << " Min: " << ::min<bool>(e, f)
            << std::endl;
  e = true;

  std::cout << std::endl << std::endl;
  std::cout << "Max" << std::endl;
  std::cout << std::endl << std::endl;
  std::cout << "Max for ints" << std::endl;
  std::cout << std::endl;
  std::cout << "a = " << a << " b = " << b << " Min: " << ::max<int>(a, b)
            << std::endl;
  a = 6;
  std::cout << "a = " << a << " b = " << b << " Min: " << ::max<int>(a, b)
            << std::endl;
  a = 651;
  std::cout << std::endl;
  std::cout << "Max for string" << std::endl;
  std::cout << std::endl;
  std::cout << "c = " << c << " d = " << d << " Min: " << ::max<std::string>(c, d)
            << std::endl;
  c = " World!";
  std::cout << "c = " << c << " d = " << d << " Min: " << ::max<std::string>(c, d)
            << std::endl;
  c = "Hello, ";
  std::cout << std::endl;
  std::cout << "Max for bool" << std::endl;
  std::cout << std::endl;
  std::cout << "e = " << e << " f = " << f << " Min: " << ::max<bool>(e, f)
            << std::endl;
  e = false;
  std::cout << "e = " << e << " f = " << f << " Min: " << ::max<bool>(e, f)
            << std::endl;
  e = true;
}
