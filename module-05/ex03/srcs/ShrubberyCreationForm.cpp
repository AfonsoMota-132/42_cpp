// Created by tde-sous on 26-02-2024.
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137), Target("") {
  std::cout << "[ShrubberyCreationForm] Default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(target, 145, 137), Target(target) {
  std::cout << "[ShruberryShrubberyCreationFormCreationForm] Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other.Target, 145, 137) {
  std::cout << "[ShrubberyCreationForm] Copy constructor constructor called."
            << std::endl;
  this->SetIsSigned(other.GetIsSigned());
  this->Target = other.Target;
}
ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  std::cout
      << "[ShrubberyCreationForm] Copy assignment operator constructor called."
      << std::endl;
  if (this == &other)
    return *this;
  this->SetIsSigned(other.GetIsSigned());
  this->Target = other.Target;
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "[ShrubberyCreationForm] Destructor called." << std::endl;
}

void ShrubberyCreationForm::Executer() const {
  std::ofstream outputFile((this->Target + "_shrubbery").c_str());
  outputFile << "   *\n";
  outputFile << "  /|\\\n";
  outputFile << " / | \\\n";
  outputFile << "/__|__\\\n";
  outputFile << "   |\n";
  outputFile.close();
}
