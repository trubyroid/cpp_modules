#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
		int value;
		static const int num_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& old_obj);
		Fixed& operator<<(const Fixed& obj);
		float toFloat(void) const;
		int	toInt(void) const;

		int getRawBits (void) const;
		void setRawBits (int const raw);
};

#endif