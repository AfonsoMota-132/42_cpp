
#include "../incs/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

bool ScalarConverter::CheckSign(const std::string &representation)
{
    const size_t signal = representation.find('-'); 
    return (signal != 0 && signal != std::string::npos);
}

bool ScalarConverter::IsChar(const std::string &representation)
{
    return (representation.size() == 1
        && std::isprint(representation[0])
        && !std::isdigit(representation[0]));
}

bool ScalarConverter::IsInt(const std::string &representation)
{
    if (CheckSign(representation))
        return (false);
    if (representation.find_first_not_of(
            DIGITS, signal == std::string::npos ? 0 : 1) != std::string::npos)
      return (false);
    return (true);
}

bool ScalarConverter::IsFloat(const std::string &representation)
{
    const size_t dot = representation.find('.');
    if (CheckSign(representation)
        || representation[representation.size() - 1] != 'f'
        || dot == std::string::npos)
        return (false);
    const std::string decimalPart = representation.substr(index, dot - index);
    const std::string fractionalPart =
        representation.substr(dot + 1, representation.size() - (dot + 2));  
    if (decimalPart.find_first_not_of(DIGITS) != std::string::npos ||
        fractionalPart.find_first_not_of(DIGITS) != std::string::npos)
      return (false);
    return (!decimalPart.empty() && !fractionalPart.empty());
}

void ScalarConverter::ConvertFromChar(const std::string &representation) {

    ConvertToChar(representation[0]);
    std::cout << "Int: " << static_cast<int>(representation[0]) << std::endl;
    std::cout << "Float: " << static_cast<float>(representation[0]) << "f"
            << std::endl;
    std::cout << "Double: " << static_cast<double>(representation[0])
            << std::endl;
}

void    ScalarConverter::ConvertToChar(const char &c)
{
    if (std::isprint(c)) {
      std::cout << "Char: " << c << std::endl;
    } else {
    std::cout << "Char: "
        << "Not a Displayable Char" << std::endl;
    }
}

void ScalarConverter::ConvertToNumber(const std::string &representation,
                                      long double number) {
  if (number < std::numeric_limits<char>::min()
        || number > std::numeric_limits<char>::max())
    std::cout << "Char: Overflows" << std::endl;
  else
    ConvertToChar(static_cast<char>(number));

  if (number < std::numeric_limits<int>::min()
        || number > std::numeric_limits<int>::max())
    std::cout << "Int: Overflows" << std::endl;
  else
    std::cout << "Int: " << std::atoi(representation.c_str()) << std::endl;

  if (number < -std::numeric_limits<float>::max()
        || number > std::numeric_limits<float>::max())
    std::cout << "Float: overflows" << std::endl;
  else
    std::cout << "Float: " << std::strtof(representation.c_str(), NULL) << "f"
              << std::endl;

  if (number < -std::numeric_limits<double>::max()
        || number > std::numeric_limits<double>::max())
    std::cout << "Double: overflows" << std::endl;
  else
    std::cout << "Double: " << std::strtod(representation.c_str(), NULL)
              << std::endl;
}

void ScalarConverter::Convert(const std::string &representation)
{
    if (IsChar(representation))
        ConvertFromChar(representation);
    else if (IsInt(representation))
        ConvertToNumber(representation,
            std::strtold(representation.c_str(), NULL));
    else if (IsFloat(representation))
        ConvertToNumber(representation,
            std::strtold(representation.c_str(), NULL));
}
