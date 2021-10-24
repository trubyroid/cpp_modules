#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char **argv)
{
	int	i = 0;
	int j;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j] != '\0')
				cout << (char)toupper(argv[i][j]);
			if (argv[i + 1] != nullptr)
				cout << " ";
			else
				cout << endl;
		}
	}
	return (0);
}