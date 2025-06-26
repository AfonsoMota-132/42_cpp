
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class Bureaucrat;

class AForm
{
    private:
        const std::string   Name;
        bool                IsSigned;
        const int           ExecGrade;
        const int           SignGrade;
    public:
        AForm(void);
        AForm(const std::string _Name, const int _ExecGrade
            , const int _SignGrade);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        virtual ~AForm(void) = 0;
    
        void Execute(Bureaucrat *executor) const;
        virtual void Executer() const = 0;
        void                SetIsSigned(bool sign);
        const std::string   GetName(void) const;
        bool                GetIsSigned(void) const;
        int                 GetExecGrade(void) const;
        int                 GetSignGrade(void) const;
        bool                BeSigned(Bureaucrat *signer);
        class FormIsNotSigned : public std::exception {
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
        class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif