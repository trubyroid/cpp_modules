#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
		const std::string name;
		const short int gradeSign;
		const short int gradeExec;
		bool done;
	public:
		Form(std::string new_name, short int grSign, short int grExec);
		Form(const Form &copy);
		~Form();

		Form &operator = (const Form &obj);

		std::string getName() const;
		short int getGradeSign() const;
		short int getGradeExec() const;
		bool getDone() const;

		void beSigned (const Bureaucrat &bureaucrat);

		class GradeTooHighException: public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream &operator << (std::ostream &out, const Form &obj);

#endif