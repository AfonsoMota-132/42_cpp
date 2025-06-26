
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    std::cout << "PresidentialPardon" << std::endl;
    std::cout << std::endl << std::endl;
    try {
        Intern someRandomIntern;
        AForm* rrf;
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
        AForm* rrf;
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
        AForm* rrf;
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
        AForm* rrf;
        rrf = someRandomIntern.makeForm("HEHEHEHE", "Bender");
        std::cout << rrf->GetName() << std::endl;
        rrf->Executer();
        delete rrf;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "============" << std::endl;
}