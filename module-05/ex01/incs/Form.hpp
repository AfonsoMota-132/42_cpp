
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class Bureaucrat;

class Form
{
    private:
        const std::string   Name;
        bool                IsSigned;
        const int           ExecGrade;
        const int           SignGrade;
    public:
        Form(void);
        Form(const std::string _Name, const int _ExecGrade
            , const int _SignGrade);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form(void);

        const std::string   GetName(void) const;
        bool                GetIsSigned(void) const;
        int                 GetExecGrade(void) const;
        int                 GetSignGrade(void) const;
        bool                BeSigned(Bureaucrat *signer);
        class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif