
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << "Bureaucrat/Form A grade to low";
    std::cout << std::endl << std::endl;
    try
    {
        Form            FormA("FormA", 25, 75);
        Bureaucrat      BurA("BurA", 100);
        BurA.SignForm(FormA);
        std::cout << FormA;
        std::cout << BurA;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Bureaucrat/Form B grade is more than enough";
    std::cout << std::endl << std::endl;
    try
    {
        Form        FormB("FormB", 25, 1);
        Bureaucrat  BurB("BurB", 1);
        std::cout << FormB;
        BurB.SignForm(FormB);
        std::cout << FormB;
        std::cout << BurB;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Bureaucrat/Form C grade is just enough";
    std::cout << std::endl << std::endl;
    try
    {
        Form        FormC("FormC", 1, 1);
        Bureaucrat  BurC("BurC", 1);
        std::cout << FormC;
        BurC.SignForm(FormC);
        std::cout << FormC;
        std::cout << BurC;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Form D exec start too high";
    std::cout << std::endl << std::endl;
    try
    {
        Form        FormD("FormD", 0, 125);
        std::cout << FormD;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Form E sign start too high";
    std::cout << std::endl << std::endl;
    try
    {
        Form        FormE("FormE", 125, 0);
        std::cout << FormE;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Form F exec start too low";
    std::cout << std::endl << std::endl;
    try
    {
        Form        FormF("FormF", 160, 125);
        std::cout << FormF;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Form G sign start too low";
    std::cout << std::endl << std::endl;
    try
    {
        Form        FormG("FormG", 125, 160);
        std::cout << FormG;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Form H, and I copy constructor";
    std::cout << std::endl << std::endl;
    try
    {
        Form ForH("ForH", 75, 125);
        Bureaucrat BurH("BurH", 10);
        std::cout << BurH;
        Form ForI(ForH);
        BurH.SignForm(ForH);
        std::cout << ForH;
        std::cout << ForI;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Form J, and K copy assignment";
    std::cout << std::endl << std::endl;
    try
    {
        Form ForJ("ForJ", 75, 125);
        Bureaucrat BurJ("BurJ", 10);
        Form ForK("ForK", 25, 50);
        std::cout << ForJ;
        std::cout << ForK;
        BurJ.SignForm(ForJ);
        std::cout << ForJ;
        std::cout << ForK;
        ForK = ForJ;
        std::cout << ForK;
        std::cout << ForJ;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}