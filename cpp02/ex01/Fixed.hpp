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