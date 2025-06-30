/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:22:56 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 12:27:12 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/A.hpp"
#include "../incs/B.hpp"
#include "../incs/C.hpp"
#include "../incs/D.hpp"

int main(void) {
  Base *derivedClass = Generate();
  Identify(derivedClass);
  Identify(*derivedClass);

  Base *wrongClass = new D;
  Identify(wrongClass);
  Identify(*wrongClass);
  return (0);
}
