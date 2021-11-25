#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137) {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute (Bureaucrat const &executor) const {
    Form::execute(executor);
    std::ofstream outFile(getName() + "_shrubbery");

    outFile << "SHRUBBERY!";
}