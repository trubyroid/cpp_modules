#include <iostream>

void exception(std::string string);
int printAll(double result);

int error(std::string str) {
    std::cout << "Error: " << str;
    exit (1);
}

int isException(std::string string) {
    if (string == "nanf" || string == "+inff" || string == "-inff")
        exception(string.erase(string.size() - 1, 1));
    else if (string == "nan" || string == "+inf" || string == "-inf")
        exception(string);
    else
        return (0);
    return (1);
}

int isError(std::string &string, double &result) {
    if (string.size() < 1)
        return (1);
    if (string.size() == 1 && (string[0] < '0' || string[0] > '9')) {
        result = static_cast<double>(string[0]);
        return (1);
    }
    if (string[string.size() - 1] == 'f')
        string.erase(string.size() - 1, 1);
    int dot = 0;
    for (int i = string[0] == '-' ? 1 : 0; i < string.size(); i++) {
        if (string[i] >= '0' && string[i] <= '9')
            continue;
        if (string[i] == '.' && (i + 1) < string.size() && !dot)
            dot++;
        else
            return (1);
    }
    result = std::stod(string);
    return (0);
}

int check_n_print(int argc, char **argv) {
    std::string string(argv[1]);
    double result;
    if (isException(string))
        return (0);
    if (isError(string, result))
        error("invalid input.\n");
    return (printAll(result));
}

int main(int argc, char **argv) {
    if (argc != 2)
        error("Invalid number of arguments.\n");
    return (check_n_print(argc, argv));
}