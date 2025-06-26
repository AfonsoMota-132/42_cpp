
#include "Form.hpp"

Form::Form(void) : Name("Default"), IsSigned(false),
ExecGrade(25), SignGrade(25)
{
    std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form(const std::string _Name, const int _ExecGrade
, const int _SignGrade) : Name(_Name), IsSigned(false),
ExecGrade(_ExecGrade), SignGrade(_SignGrade)
{
    if (_SignGrade > 150 || _ExecGrade > 150)
        throw GradeTooLowException();
    else if (_SignGrade <= 0 || _ExecGrade <= 0)
        throw GradeTooHighException();
    std::cout << "[Form] Parameterized constructor called" << std::endl;
}

Form::Form(const Form &other) : Name(other.Name),IsSigned(other.IsSigned),
ExecGrade(other.ExecGrade), SignGrade(other.SignGrade)
{
    std::cout << "[Form] Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "[Form] Copy assignment called" << std::endl;
    if (this == &other)
        return *this;
    this->IsSigned = other.IsSigned;
    return *this;
}

Form::~Form(void)
{
    std::cout << "[Form] Destructor called" << std::endl;
}

const std::string   Form::GetName(void) const { return (this->Name); }
bool                Form::GetIsSigned(void) const { return (this->IsSigned); }
int           Form::GetExecGrade(void) const { return (this->ExecGrade); }
int           Form::GetSignGrade(void) const { return (this->SignGrade); }

bool Form::BeSigned(Bureaucrat *Signer)
{
    if (this->GetIsSigned())
    {
        std::cout << "Form is already signed!" << std::endl;
        return (false);
    }
    else if (this->GetSignGrade() < Signer->GetGrade())
        throw Form::GradeTooLowException();
    else
    {
        this->IsSigned = true;
        return (true);
    }
}

const char *Form::GradeTooHighException::what() const throw() {
  return ("[Form][Exception] Grade is too High!");
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("[Form][Exception] Grade is too Low!");
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    os << "This form has the name " << obj.GetName()
    << " and currently it's";
    if (obj.GetIsSigned())
        os << " signed";
    else
        os << " not signed yet";
    os << " the required grade to sign is " << obj.GetSignGrade();
    os << " and the required exec grade is " << obj.GetExecGrade();
    os << std::endl;
    return (os);
}