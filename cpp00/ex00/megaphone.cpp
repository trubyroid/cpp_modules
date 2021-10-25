#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i = 0;
	int j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j] != '\0')
				std::cout << (char)toupper(argv[i][j]);
			if (argv[i + 1] != nullptr)
				std::cout << " ";
			else
				std::cout << std::endl;
		}
	}
	return (0);
}
