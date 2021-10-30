#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>


class Karen {
		void debug (void);
		void info (void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
		void karenFilter(std::string level);
};

typedef void (Karen::*ptrFunc) (void);

#endif