#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>

int main() {
    std::cout << "Cases with vectors:\n";
    std::vector<int> array;

    try {std::cout << *easyfind(array, 4) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }

    for (int i = 0; i < 5; i++) {
        array.push_back(i);
    }

    try {std::cout << *easyfind(array, 4) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }

    try {std::cout << *easyfind(array, 8) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }

    std::cout << "\nCases with lists:\n";
    std::list<int> newList;

    try {std::cout << *easyfind(newList, 4) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }

    for (int i = 0; i < 10; i++) {
        newList.push_back(i);
    }

    try {std::cout << *easyfind(newList, 4) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }
    try {std::cout << *easyfind(newList, 10) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }

    std::cout << "\nCases with sets:\n";
    std::set<int> newSet;

    try {std::cout << *easyfind(newSet, 4) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }

    for (int i = 0; i < 10; i++) {
        newSet.insert(i);
    }

    try {std::cout << *easyfind(newSet, 4) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }
    try {std::cout << *easyfind(newList, 10) << std::endl;}
    catch (const std::exception &ex) {
        std::cout << ex.what();
    }
}