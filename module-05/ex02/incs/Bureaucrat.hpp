/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:57:04 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/27 09:00:07 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "../incs/AForm.hpp"
#include <iostream>
#include <string>

class AForm;

class Bureaucrat {
private:
  const std::string Name;
  int Grade;

public:
  Bureaucrat(void);
  Bureaucrat(const std::string _Name, const int _Grade);
  Bureaucrat(const Bureaucrat &other);
  Bureaucrat &operator=(const Bureaucrat &other);
  ~Bureaucrat(void);

  int GetGrade(void) const;
  const std::string GetName(void) const;
  void IncGrade(void);
  void DecGrade(void);
  void AddGrade(const int _Grade);
  void SignForm(AForm &Form);
  void ExecuteForm(AForm &form);
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif
