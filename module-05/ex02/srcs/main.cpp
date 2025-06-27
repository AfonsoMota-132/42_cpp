/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:57:44 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/27 09:00:57 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"
#include "../incs/Bureaucrat.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/ShrubberyCreationForm.hpp"

int main(void) {
  std::cout << "Enough But Not Signed" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 144);
    ShrubberyCreationForm FormA("Formâge A");
    FormA.Execute(&BurA);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Not Enough" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 138);
    ShrubberyCreationForm FormA("Formâge A");
    FormA.BeSigned(&BurA);
    FormA.Execute(&BurA);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Enough and signed" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 25);
    ShrubberyCreationForm FormA("Formâge A");
    FormA.Execute(&BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Robotomy" << std::endl;
  std::cout << std::endl << std::endl;
  std::cout << "Enough But Not Signed" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 30);
    RobotomyRequestForm FormA("Formâge A");
    FormA.Execute(&BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Not Enough" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 50);
    RobotomyRequestForm FormA("Formâge A");
    FormA.BeSigned(&BurA);
    FormA.Execute(&BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Enough and signed" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 25);
    RobotomyRequestForm FormA("Formâge A");
    FormA.BeSigned(&BurA);
    FormA.Execute(&BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Presidential" << std::endl;
  std::cout << std::endl << std::endl;
  std::cout << "Enough But Not Signed" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 2);
    PresidentialPardonForm FormA("Formâge A");
    FormA.Execute(&BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Not Enough" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 15);
    PresidentialPardonForm FormA("Formâge A");
    FormA.BeSigned(&BurA);
    FormA.Execute(&BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Enough and signed" << std::endl;
  std::cout << std::endl << std::endl;
  try {
    Bureaucrat BurA("other", 2);
    PresidentialPardonForm FormA("Formâge A");
    FormA.BeSigned(&BurA);
    FormA.Execute(&BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
