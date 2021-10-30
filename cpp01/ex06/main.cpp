#include "Karen.hpp"

int main (int argc, char **argv) {
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments.\n";
		return (1);
	}
	karen.karenFilter(argv[1]);
}