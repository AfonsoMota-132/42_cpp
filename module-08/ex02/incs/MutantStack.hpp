/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 08:30:52 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/02 09:00:40 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T> class MutantStack : public std::stack<T> {
public:
  typedef std::stack<T> Stack;
  typedef typename Stack::container_type Container;
  typedef typename Container::iterator Iterator;
  typedef typename Container::const_iterator ConstIterator;

  MutantStack(void) : Stack() {
    std::cout << "[MutantStack] Default Constructor called" << std::endl;
  };
  MutantStack(const MutantStack &other) : Stack(other) {
    std::cout << "[MutantStack] Copy Constructor Constructor called"
              << std::endl;
  };
  MutantStack &operator=(const MutantStack &other) {
    std::cout << "[MutantStack] Assignment operator Constructor called"
              << std::endl;
    if (this != &other)
		*this = other;
	return *this;
  };
  Iterator Begin(void) { return (Stack::c.begin()); }
  Iterator End(void) { return (Stack::c.end()); }
  ConstIterator Begin(void) const { return (Stack::c.begin()); }
  ConstIterator End(void) const { return (Stack::c.end()); }
};

#endif
