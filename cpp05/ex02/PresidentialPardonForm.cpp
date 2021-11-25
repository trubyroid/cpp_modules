#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy) {}
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute (Bureaucrat const &executor) const {
    Form::execute(executor);
    std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}