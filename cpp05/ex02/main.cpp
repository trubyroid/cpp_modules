#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat prez("Prezik", 1);
    Bureaucrat first_bur("High_manager", 20);
    Bureaucrat second_bur("Middle_manager", 50);
    Bureaucrat third_bur("Low_manager", 140);
    Bureaucrat fourth_bur("Plankton", 150);
    PresidentialPardonForm pres("Сompetitor ");
    RobotomyRequestForm rob("Process");
    ShrubberyCreationForm shr("New");

    std::cout << std::endl;
    prez.signForm(pres);
    prez.executeForm(pres);
    prez.signForm(rob);
    prez.executeForm(rob);
    prez.signForm(shr);
    prez.executeForm(shr);
    std::cout << std::endl;
    first_bur.signForm(pres);
    first_bur.executeForm(pres);
    first_bur.signForm(rob);
    first_bur.executeForm(rob);
    first_bur.signForm(shr);
    first_bur.executeForm(shr);
   std::cout << std::endl;
    second_bur.signForm(pres);
    second_bur.executeForm(pres);
    second_bur.signForm(rob);
    second_bur.executeForm(rob);
    second_bur.signForm(shr);
    second_bur.executeForm(shr);
   std::cout << std::endl;
    third_bur.signForm(pres);
    third_bur.executeForm(pres);
    third_bur.signForm(rob);
    third_bur.executeForm(rob);
    third_bur.signForm(shr);
    third_bur.executeForm(shr);
    std::cout << std::endl;
    fourth_bur.signForm(pres);
    fourth_bur.executeForm(pres);
    fourth_bur.signForm(rob);
    fourth_bur.executeForm(rob);
    fourth_bur.signForm(shr);
    fourth_bur.executeForm(shr);
    std::cout << std::endl;
}