#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cstring>
using namespace std;

class contact {
	public:
		int		flag;
		string	name;
		string	surname;
		string	nick;
		string	number;
		string	darkest_secret;
		contact ();
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
	cin.ignore(32767, '\n');
	cout << "Name:";
	getline(cin, name);
	cout << "Surname:";
	getline(cin, surname);
	cout << "Nick:";
	getline(cin, nick);
	cout << "Number:";
	getline(cin, number);
	cout << "DARKEST SECRET:";
	getline(cin, darkest_secret);
	flag = 1;
}

class book {
	public:
		contact info[8];
		void new_contact (int i) {info[i].set_data();}
};

#endif