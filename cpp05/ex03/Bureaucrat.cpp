#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string new_name, short int new_grade) {
	std::cout << "Default bureaucrat constructor called.\n";
	name = new_name;
	if (new_grade < 1)
		throw GradeTooHighException();
	if (new_grade > 150)
		throw GradeTooLowException();
	grade = new_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	std::cout << "Copy bureaucrat constructor called.\n";
	this->operator=(copy);
}

Bureaucrat::~Bureaucrat () {
	std::cout << "Default bureaucrat destructor called.\n";
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj) {
	name = obj.getName();
	grade = obj.getGrade();
	return *this;
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj) {
	out << obj.getName() << " (" << obj.getGrade() << ")";
	return (out);
}

void Bureaucrat::incGrade() {
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}
void Bureaucrat::decGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(Form &form) {
	try {form.beSigned(*this);}
	catch (std::exception &exc) {
		std::cout << name << " cannot sign " << form.getName() << " because " << exc.what();
	}
}

void Bureaucrat::executeForm(Form const &form) {
    try {form.execute(*this);}
    catch (std::exception &exc) {
        std::cout << name << " cannot execute " << form.getName() << " because " << exc.what();
    }
}

std::string Bureaucrat::getName () const{
	return (name);
}

short int Bureaucrat::getGrade () const{
	return (grade);
}

const char* Bureaucrat::GradeTooHighException::what () const throw() {
	return "Grade too high.\n";
}

const char* Bureaucrat::GradeTooLowException::what () const throw() {
	return "Grade too low.\n";
}