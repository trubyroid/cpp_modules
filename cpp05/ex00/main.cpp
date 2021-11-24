#include "Bureaucrat.hpp"

int main () 
{
	{
		Bureaucrat office_worker("Plankton", 1);

		std::cout << office_worker << std::endl;
		try {office_worker.incGrade();}
		catch (std::exception& exc) {
			std::cout << "Error: " << exc.what();
		}
		std::cout << office_worker << std::endl;
	}
	{
		std::cout << "______________________________________\n";
		Bureaucrat office_worker("Plankton", 1);

		std::cout << office_worker << std::endl;
		for (int i = 0; i != 150; i++) {
			try {office_worker.decGrade();}
			catch (std::exception& exc) {
			std::cout << "Error: " << exc.what();
			}
		}
		std::cout << office_worker << std::endl;
	}
}