/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:05:51 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/27 09:05:58 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"
#include "../incs/Bureaucrat.hpp"
#include "../incs/Intern.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/ShrubberyCreationForm.hpp"

int main(void) {
  std::cout << "PresidentialPardon" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
    std::cout << rrf->GetName() << std::endl;
    rrf->Executer();
    delete rrf;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "RobotomyRequest" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
    std::cout << rrf->GetName() << std::endl;
    rrf->Executer();
    delete rrf;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "ShrubberyCreation" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("ShrubberyCreation", "Bender");
    std::cout << rrf->GetName() << std::endl;
    rrf->Executer();
    delete rrf;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Form not found" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("HEHEHEHE", "Bender");
    std::cout << rrf->GetName() << std::endl;
    rrf->Executer();
    delete rrf;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
}
