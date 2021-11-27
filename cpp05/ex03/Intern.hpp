#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
        std::string forms[3];
    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();

        Form *makeForm(std::string form, std::string target) const;
};

#endif