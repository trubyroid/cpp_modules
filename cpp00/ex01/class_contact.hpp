#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

# include <iostream>
# include <string>
# include <sstream>

#define SIZE_OF_COLUMN 10

class contact {
		std::string	name;
		std::string	surname;
		std::string	nick;
		std::string	number;
		std::string	darkest_secret;
	public:
		contact ();
		int		flag;
		void first_print();
		void print(std::string str);
		void print_contact_info();
		void set_data ();
};

contact::contact () {
	name = "";
	surname = "";
	nick = "";
	number = "";
	darkest_secret = "";
	flag = 0;
}

void contact::set_data () {
	std::cin.ignore(32767, '\n');
	std::cout << "Name:";
	getline(std::cin, name);
	std::cout << "Surname:";
	getline(std::cin, surname);
	std::cout << "Nick:";
	getline(std::cin, nick);
	std::cout << "Number:";
	getline(std::cin, number);
	std::cout << "DARKEST SECRET:";
	getline(std::cin, darkest_secret);
	flag = 1;
}


void contact::first_print () {
	this->print(this->name);
	this->print(this->surname);
	this->print (this->nick);
}

void contact::print (std::string str) {
	int quantity;
	int i = -1;

	quantity = str.length();
	if (quantity < 10)
	{
		while (SIZE_OF_COLUMN - quantity != 0)
		{
			std::cout << " ";
			quantity++;
		}
	}
	while (++i < 9 && str[i] != '\0')
	{
		std::cout << str[i];
		if (i == 8 && str[9] != '\0')
			std::cout << ".";
	}
	std::cout << "|";
}

void contact::print_contact_info () {
	std::cout << "Name: ";
	std::cout << this->name << std::endl;
	std::cout << "Surname: ";
	std::cout << this->surname << std::endl;
	std::cout << "Nick: ";
	std::cout << this->nick << std::endl;
	std::cout << "Number: ";
	std::cout << this->number << std::endl;
	std::cout << "DARKEST SECRET: ";
	std::cout << this->darkest_secret << std::endl;
}

#endif