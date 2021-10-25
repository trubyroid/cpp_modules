#ifndef CLASS_BOOK_HPP
# define CLASS_BOOK_HPP

# include "class_contact.hpp"

class book {
		contact info[8];
	public:
		book();
		void new_contact (int i) {info[i].set_data();};
		void search ( void );
		void choice ( void );
};

book::book () {
	return ;
}

void book::search () {
	int i = -1;

	if (this->info[0].flag != 0)
	{
		std::cout << "_____Index|______Name|___Surname|______Nick|" << std::endl;
		while (this->info[++i].flag != 0 && i < 8)
		{
			std::cout << "         " << i + 1 << "|";
			this->info[i].first_print();
			std::cout << std::endl;
		}
		this->choice();
	}
	else
		std::cout << "No one contact was added." << std::endl;
}

void book::choice () {
	std::string str;
	int index;

	std::cout << "Enter the index to get more information about one of this contact:";
	std::cin.ignore(32767, '\n');
	getline(std::cin, str);
	if (str.length() != 1 || (char)isdigit(str[0]) == 0)
		return ;
	std::stringstream(str) >> index;
	this->info[index - 1].print_contact_info();
}

#endif