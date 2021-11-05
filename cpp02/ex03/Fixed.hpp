#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
		int point_value;
		static const int num_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int new_value);
		Fixed(const float new_value);
		Fixed(const Fixed& copy);
		~Fixed();

		float toFloat(void) const;
		int	toInt(void) const;
		int getRawBits (void) const;
		void setRawBits (int const raw);
		const static Fixed& min (const Fixed &a, const Fixed &b);
		const static Fixed& max (const Fixed &a, const Fixed &b);

		Fixed& operator=(const Fixed& obj);

		bool operator ==(const Fixed& obj);
		bool operator !=(const Fixed& obj);
		bool operator <(const Fixed& obj);
		bool operator >(const Fixed& obj);
		bool operator <=(const Fixed& obj);
		bool operator >=(const Fixed& obj);

		Fixed operator +(const Fixed &obj);
		Fixed operator -(const Fixed &obj);
		Fixed operator *(const Fixed &obj);
		Fixed operator /(const Fixed &obj);

		Fixed operator ++(int);
		Fixed &operator ++(void);
		Fixed operator --(int);
		Fixed &operator --(void);

};

std::ostream& operator<<(std::ostream &out, const Fixed	&obj);

#endif