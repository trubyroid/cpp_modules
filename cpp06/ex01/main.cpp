#include <iostream>
#include <iomanip>

struct Data {
    short int number;
    std::string name;
    Data(int new_number, std::string str): number(new_number), name(str) {}
};

uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

int main () {
    Data data(25, "Josh");

    std::cout << "PtrData = " << &data << std::endl;
    std::cout << "serialized parametr - " << serialize(&data) << std::endl;
    std::cout << "newPtrData = " << deserialize(serialize(&data)) << std::endl;
}