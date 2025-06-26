
#include "AForm.hpp"

AForm::AForm(void) : Name("Default"), IsSigned(false),
ExecGrade(25), SignGrade(25)
{
    std::cout << "[AForm] Default constructor called" << std::endl;
}

AForm::AForm(const std::string _Name, const int _ExecGrade
, const int _SignGrade) : Name(_Name), IsSigned(false),
ExecGrade(_ExecGrade), SignGrade(_SignGrade)
{
    if (_SignGrade > 150 || _ExecGrade > 150)
        throw GradeTooLowException();
    else if (_SignGrade <= 0 || _ExecGrade <= 0)
        throw GradeTooHighException();
    std::cout << "[AForm] Parameterized constructor called" << std::endl;
}

AForm::AForm(const AForm &other) : Name(other.Name),IsSigned(other.IsSigned),
ExecGrade(other.ExecGrade), SignGrade(other.SignGrade)
{
    std::cout << "[AForm] Copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "[AForm] Copy assignment called" << std::endl;
    if (this == &other)
        return *this;
    this->IsSigned = other.IsSigned;
    return *this;
}

AForm::~AForm(void)
{
    std::cout << "[Form] Destructor called" << std::endl;
}

void                AForm::SetIsSigned(bool sign) { this->IsSigned = sign; }
const std::string   AForm::GetName(void) const { return (this->Name); }
bool                AForm::GetIsSigned(void) const { return (this->IsSigned); }
int           AForm::GetExecGrade(void) const { return (this->ExecGrade); }
int           AForm::GetSignGrade(void) const { return (this->SignGrade); }

bool AForm::BeSigned(Bureaucrat *Signer)
{
    if (this->GetIsSigned())
    {
        std::cout << "Form is already signed!" << std::endl;
        return (false);
    }
    else if (this->GetSignGrade() < Signer->GetGrade())
        throw AForm::GradeTooLowException();
    else
    {
        this->IsSigned = true;
        return (true);
    }
}

void AForm::Execute(Bureaucrat *executor) const {
    if (!this->GetIsSigned())
        throw AForm::FormIsNotSigned();
    if (this->GetSignGrade() < executor->GetGrade())
        throw AForm::GradeTooLowException();   
    this->Executer();
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("[Form][Exception] Grade is too High!");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("[Form][Exception] Grade is too Low!");
}
const char *AForm::FormIsNotSigned::what() const throw() {
    return ("[Form][Exception] The Form was not signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
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