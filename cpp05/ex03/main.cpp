#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    Intern someRandomIntern;
    Form* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "FirstBender");
    std::cout << *rrf << std::endl;
    delete rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "SecondBender");
    std::cout << *rrf << std::endl;
    delete rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "ThirdBender");
    std::cout << *rrf << std::endl;
    delete rrf;
    rrf = someRandomIntern.makeForm("invalid form", "FourthBender");
    std::cout << *rrf << std::endl;
}