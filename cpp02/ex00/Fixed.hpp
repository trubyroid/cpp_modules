#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
		int point_value;
		static const int num_fractional_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& old_obj);
		int getRawBits (void) const;
		void setRawBits (int const raw);
};

#endif