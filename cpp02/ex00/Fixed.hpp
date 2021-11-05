#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
		int point_value;
		static const int num_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();

		int getRawBits (void) const;
		void setRawBits (int const raw);
		
		Fixed& operator=(const Fixed& old_obj);
};

#endif