#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy) {}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute (Bureaucrat const &executor) const {
    Form::execute(executor);
    //this
    std::cout << "*some drilling noises*" << std::endl << this->getName() << " has been robotomized successfully 50% of the time\n";
    //or this
    std::cout << "It's failure\n";
}