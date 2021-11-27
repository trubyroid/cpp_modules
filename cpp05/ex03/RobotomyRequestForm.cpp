#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy) {}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute (Bureaucrat const &executor) const {
    time_t		now = time(0);
    struct tm	tstruct;
    char		buf[80];

    Form::execute(executor);
    tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%X", &tstruct);
    if ((int)buf[16] % 2) {
        std::cout << "*some drilling noises*" << std::endl << this->getName() << " has been robotomized successfully 50% of the time\n";
    }
    else {
        std::cout << "It's failure\n";
    }
}
