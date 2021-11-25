#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
#include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form {
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const &executor) const;
};

#endif