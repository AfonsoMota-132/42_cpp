
#include "../incs/ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac >= 2) {
        for (int i = 1; i < ac; i++)
        {
            if (i != 1)
                std::cout << std::endl << std::endl;
            std::cout << "Arg nbr: " << i
                    << ", content: " << av[i]
                    << std::endl << std::endl;
            ScalarConverter::Convert(av[i]);
        }
    } else
        std::cout << "Error!\nNot Enough Arguments!" << std::endl;
}