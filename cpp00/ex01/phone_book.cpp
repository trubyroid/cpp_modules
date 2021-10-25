#include "class_book.hpp"

#define SIZE_OF_COLUMN 10

int	main()
{
	std::string	command;
	book	phonebook;
	int		i = -1;

	std::cout << "Hello!\nIt's your phonebook.\n";
	while (1)
	{
		std::cout << "Please, enter some command (ADD, SEARCH or EXIT): ";
		std::cin >> command;
		if (command != "ADD" && command != "EXIT" && command != "SEARCH")
			continue ;
		if (command == "ADD")
			phonebook.new_contact(++i);
		if (command == "SEARCH")
			phonebook.search();
		if (command == "EXIT")
			return (0);
		if (i == 7)
			i = -1;
	}
	return (0);
}
