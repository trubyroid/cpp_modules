#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		std::string name;
		short int grade;
	public:
		Bureaucrat (std::string new_name, short int new_grade);
		Bureaucrat (const Bureaucrat &copy);
		~Bureaucrat ();

		Bureaucrat& operator=(const Bureaucrat &obj);
		std::string getName() const;
		short int getGrade() const;

		void incGrade();
		void decGrade();
		void signForm(Form &form);

		class GradeTooHighException: public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &obj);

#endif