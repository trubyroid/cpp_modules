#include "Form.hpp"

Form::Form(std::string new_name, short int grSign, short int grExec): name(new_name), gradeSign(grSign), gradeExec(grExec) {
	std::cout << "Default form constructor called.\n";
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	done = false;
}

Form::Form(const Form &copy): name(copy.name), gradeSign(copy.gradeSign), gradeExec(copy.gradeExec) {
	std::cout << "Default form copy constructor called.\n";
}

Form::~Form() {
	std::cout << "Default form destructor called.\n";
}

Form &Form::operator = (const Form &obj) {
	return *this;
}

std::ostream &operator << (std::ostream &out, const Form &obj) {
	out << "Form name: " << obj.getName() << "; Sign: " << obj.getGradeSign() << "; Exec: " << obj.getGradeExec();
	return (out);
}

std::string Form::getName() const {
	return (name);
}
short int Form::getGradeSign () const {
	return (gradeSign);
}
short int Form::getGradeExec () const {
	return (gradeExec);
}
bool Form::getDone() const {
	return (done);
}

void Form::beSigned (const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= gradeSign) {
		std::cout << bureaucrat.getName() << " signs " << name << std::endl;
		done = true;
	}
	else
		throw GradeTooHighException();
}

const char* Form::GradeTooHighException::what () const throw() {
	return "grade of form too high.\n";
}

const char* Form::GradeTooLowException::what () const throw() {
	return "grade of form too low.\n";
}