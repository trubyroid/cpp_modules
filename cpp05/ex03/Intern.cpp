#include "Intern.hpp"

Intern::Intern() {
    forms[0] = "presidential pardon";
    forms[1] = "robotomy request";
    forms[2] = "shrubbery creation";
}

Intern::Intern(const Intern &copy) {}
Intern::~Intern() {}

Form *Intern::makeForm(std::string form, std::string target) const {
        Form *NewForms[4];
        Form *currentForm = NULL;
        NewForms[0] = new PresidentialPardonForm(target);
        NewForms[1] = new RobotomyRequestForm(target);
        NewForms[2] = new ShrubberyCreationForm(target);
        NewForms[3] = NULL;

        int i = 0;
        for (; i < 4; i++) {
            if (form == forms[i]) {
                currentForm = NewForms[i];
                break;
            }
        }
        for (int it = 0; it < 3; it++) {
            if (it != i)
                delete NewForms[it];
        }
        if (currentForm == NULL) {
            std::cerr << "Invalid name of form.\n";
            exit (1);
        }
        return (currentForm);    
}