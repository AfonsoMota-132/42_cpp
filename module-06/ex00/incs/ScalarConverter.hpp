
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

#define DIGITS "0123456789"

class ScalarConverter
{
    private:
        ScalarConverter();
        static bool CheckSign(const std::string &representation);
        static bool IsChar(const std::string &representation);
        static bool IsInt(const std::string &representation);
        static bool IsFloat(const std::string &representation);
        static void ConvertFromChar(const std::string &representation);
        static void ConvertToNumber(const std::string &representation,
                                      long double number);
        static void ConvertToChar(const char &c);
    public:
        static void Convert (const std::string &representation); 
};

#endif