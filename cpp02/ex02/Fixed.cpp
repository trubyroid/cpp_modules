#include "Fixed.hpp"

Fixed::Fixed () {
	this->point_value = 0;
}

Fixed::Fixed (const int new_value) {
	this->point_value = new_value * (1 << this->num_fractional_bits);
}

Fixed::Fixed (const float new_value) {
	this->point_value = roundf(new_value * (1 << this->num_fractional_bits));
}

Fixed::~Fixed () {
} 

Fixed::Fixed(const Fixed& copy) {
	Fixed::operator=(copy);
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

const Fixed &Fixed::min (const Fixed &a, const Fixed &b) {
	return (a.getRawBits() > b.getRawBits() ? b : a);
}
const Fixed &Fixed::max (const Fixed &a, const Fixed &b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}



Fixed& Fixed::operator =(const Fixed& obj) {
	this->setRawBits(obj.getRawBits());
	return *this;
}

std::ostream& operator <<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return (out);
}

bool Fixed::operator ==(const Fixed& obj) {
	return (this->point_value == obj.getRawBits());
}
bool Fixed::operator !=(const Fixed& obj) {
	return (this->point_value != obj.getRawBits());
}
bool Fixed::operator <(const Fixed& obj) {
	return (this->point_value < obj.getRawBits());
}
bool Fixed::operator >(const Fixed& obj) {
	return (this->point_value > obj.getRawBits());
}
bool Fixed::operator <=(const Fixed& obj) {
	return (this->point_value <= obj.getRawBits());
}
bool Fixed::operator >=(const Fixed& obj) {
	return (this->point_value >= obj.getRawBits());
}

Fixed Fixed::operator +(const Fixed& obj) {
	return (Fixed(this->toFloat() + obj.toFloat()));
}
Fixed Fixed::operator -(const Fixed& obj) {
	return (Fixed(this->toFloat() - obj.toFloat()));
}
Fixed Fixed::operator *(const Fixed& obj) {
	return (Fixed(this->toFloat() * obj.toFloat()));
}
Fixed Fixed::operator /(const Fixed& obj) {
	return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed Fixed::operator ++(int){
	Fixed fict (*this);
	++(this->point_value);
	return fict;
}
Fixed &Fixed::operator ++(void){
	this->point_value++;
	return *this;
}
Fixed Fixed::operator --(int){
	Fixed fict (*this);
	--(this->point_value);
	return fict;
}
Fixed &Fixed::operator --(void){
	this->point_value--;
	return *this;
}
