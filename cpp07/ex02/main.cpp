#include "Array.hpp"

int main() {
    /*--empty array case--*/
    Array<int> array;

    std::cout << "Empty array case: " << array.getSize() << std::endl;
  
    /*--full array case--*/
    Array<int> newArray(78);
    std::cout << "Full array case: " << newArray.getSize() << std::endl;

    /*--copy constructor case--*/
    array = newArray;
    std::cout << "Copy constructor case: ";
    std::cout << "newArray: " << newArray.getSize();
    std::cout << " array: " << array.getSize() << std::endl;

    /*--case with []--*/
    std::cout << "Operator [] case: ";
    try {std::cout << newArray[75] << std::endl;}
    catch (std::exception &ex) {
        std::cout << ex.what();
    }

    /*--cases with exception--*/
    try {Array<int> wrong(-20);}
    catch (std::exception &ex) {
        std::cout << "Size exception case: " << ex.what();
    }
    try {std::cout << newArray[80] << std::endl;}
    catch (std::exception &ex) {
        std::cout << "Index exception case: " << ex.what();
    }
}