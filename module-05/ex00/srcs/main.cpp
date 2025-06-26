
#include "../incs/Bureaucrat.hpp"

int main(void)
{
    std::cout << "Bureaucrat A dec to low";
    std::cout << std::endl << std::endl;
    try
    {
        Bureaucrat BurA("BurA", 150);
        std::cout << BurA;
        BurA.DecGrade();
        std::cout << BurA;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Bureaucrat B inc to high";
    std::cout << std::endl << std::endl;
    try
    {
        Bureaucrat BurB("BurB", 1);
        std::cout << BurB;
        BurB.IncGrade();
        std::cout << BurB;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Bureaucrat C start too high";
    std::cout << std::endl << std::endl;
    try
    {
        Bureaucrat BurC("BurC", 0);
        std::cout << BurC;
        BurC.IncGrade();
        std::cout << BurC;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Bureaucrat D start too low";
    std::cout << std::endl << std::endl;
    try
    {
        Bureaucrat BurD("BurD", 250);
        std::cout << BurD;
        BurD.IncGrade();
        std::cout << BurD;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Bureaucrat E, and F copy constructor";
    std::cout << std::endl << std::endl;
    try
    {
        Bureaucrat BurE("BurE", 75);
        std::cout << BurE;
        Bureaucrat BurF(BurE);
        BurE.DecGrade();
        std::cout << BurE;
        std::cout << BurF;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Bureaucrat G, and H copy assignment";
    std::cout << std::endl << std::endl;
    try
    {
        Bureaucrat BurG("BurG", 25);
        std::cout << BurG;
        Bureaucrat BurH("BurH", 1);
        BurH = BurG;
        BurG.DecGrade();
        std::cout << BurG;
        std::cout << BurH;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}