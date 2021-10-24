#include "phone_book.hpp"

#define SIZE_OF_COLUMN 10

static void	print_data(string str)
{
	int quantity;
	int i = -1;

	quantity = str.length();
	if (quantity < 10)
	{
		while (SIZE_OF_COLUMN - quantity != 0)
		{
			cout << " ";
			quantity++;
		}
	}
	while (++i < 9 && str[i] != '\0')
	{
		cout << str[i];
		if (i == 8 && str[9] != '\0')
			cout << ".";
	}
	cout << "|";
}

static void	choice(book *phonebook)
{
	string str;
	int index;

	cout << "Enter the index to get more information about one of this contact:";
	cin.ignore(32767, '\n');
	getline(cin, str);
	if (str.length() != 1 || (char)isdigit(str[0]) == 0)
		return ;
	stringstream(str) >> index;
	cout << "Name: ";
	cout << phonebook->info[index - 1].name << endl;
	cout << "Surname: ";
	cout << phonebook->info[index - 1].surname << endl;
	cout << "Nick: ";
	cout << phonebook->info[index - 1].nick << endl;
	cout << "Number: ";
	cout << phonebook->info[index - 1].number << endl;
	cout << "DARKEST SECRET: ";
	cout << phonebook->info[index - 1].darkest_secret << endl;
}

static void	search(book *phonebook)
{
	int i = -1;

	if (phonebook->info[0].flag != 0)
	{
		cout << "_____Index|______Name|___Surname|______Nick|" << endl;
		while (phonebook->info[++i].flag != 0 && i < 8)
		{
			cout << "         " << i + 1 << "|";
			print_data(phonebook->info[i].name);
			print_data(phonebook->info[i].surname);
			print_data(phonebook->info[i].nick);
			cout << endl;
		}
		choice(phonebook);
	}
	else
		cout << "No one contact was added." << endl;
}


int	main()
{
	string	command;
	book	phonebook;
	int		i = -1;

	cout << "Hello!\nIt's your phonebook.\n";
	while (1)
	{
		cout << "Please, enter some command (ADD, SEARCH or EXIT): ";
		cin >> command;
		if (command != "ADD" && command != "EXIT" && command != "SEARCH")
			continue ;
		if (command == "ADD")
			phonebook.new_contact(++i);
		if (command == "SEARCH")
			search(&phonebook);
		if (command == "EXIT")
			return (0);
		if (i == 7)
			i = -1;
	}
	return (0);
}
