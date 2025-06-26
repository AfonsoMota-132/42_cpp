
#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        ~Intern();
        static AForm *makeForm(const std::string &formName,
                               const std::string &formTargetName);
        static AForm *makePresidentialPardonForm(const std::string &target);
        static AForm *makeRobotomyRequestForm(const std::string &target);
        static AForm *makeShrubberyCreationForm(const std::string &target);
        class FormNotFound : public std::exception {
        public:
            virtual const char *what() const throw();
        };
};

#endif