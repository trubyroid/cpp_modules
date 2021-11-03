#include "Fixed.hpp"

Fixed::Fixed () {
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::~Fixed () {
	std::cout << "Destructor called\n";
} 

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called\n";
	Fixed::operator=(copy);
}

Fixed& Fixed::operator= (const Fixed& param) {
	std::cout << "Assignation operator called\n";
	this->setRawBits(param.getRawBits());
	return *this;
}

int Fixed::getRawBits (void) const {
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits (int const raw) {
	this->value = raw;
}