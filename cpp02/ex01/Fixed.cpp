#include "Fixed.hpp"

Fixed::Fixed () {
	std::cout << "Default constructor called\n";
	this->point_value = 0;
}

Fixed::Fixed (const int new_value) {
	std::cout << "Int constructor called\n";
	this->point_value = new_value * (1 << this->num_fractional_bits);
}

Fixed::Fixed (const float new_value) {
	std::cout << "Float constructor called\n";
	this->point_value = roundf(new_value * (1 << this->num_fractional_bits));
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called\n";
	Fixed::operator=(copy);
}

Fixed::~Fixed () {
	std::cout << "Destructor called\n";
} 

float Fixed::toFloat(void) const {
	return (this->point_value / float(1 << this->num_fractional_bits));
}

int Fixed::toInt(void) const {
	return (this->point_value / (1 << this->num_fractional_bits));
}

int Fixed::getRawBits (void) const {
	return (this->point_value);
}

void Fixed::setRawBits (int const raw) {
	this->point_value = raw;
}

Fixed& Fixed::operator= (const Fixed& obj) {
	std::cout << "Assignation operator called\n";
	this->setRawBits(obj.getRawBits());
	return *this;
}

std::ostream& operator<< (std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return (out);
}