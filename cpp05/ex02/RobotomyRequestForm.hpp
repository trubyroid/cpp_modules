#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form {
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const &executor) const;
};

#endif