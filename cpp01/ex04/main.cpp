#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class myClass {
		std::string nameFile;
		std::string defaultStr;
		std::string newStr;
		std::ifstream file;
	public:
		myClass(char *name, char *s1, char *s2);
		void replace();
		~myClass();
};

myClass::~myClass () {
} 

myClass::myClass (char *name, char *s1, char *s2) {
	this->nameFile = name;
	this->defaultStr = s1;
	this->newStr = s2;
	this->file.open(this->nameFile);
	if (!this->file.is_open())
	{
		std::cout << "This file does not exist.\n";
		return ;
	}
	this->replace();
}

void myClass::replace()
{
	std::ofstream newFile (this->nameFile + ".replace");
	std::string str;

	while (getline(this->file, str)) {
		if (str == this->defaultStr)
			newFile << this->newStr;
		else
			newFile << str;
		if (!this->file.eof())
			newFile << std::endl;
	}
	this->file.close();
	newFile.close ();
}

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}
	myClass newFile(argv[1], argv[2], argv[3]);
}