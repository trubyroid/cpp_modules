#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <set>

class errorNotFound: public std::exception {
    virtual const char *what() const throw() {return ("Error: symbol was not found.\n");};
};

template <typename T>
typename T::iterator easyfind(T &container, int symbol) {
    if (container.begin() == container.end())
        throw errorNotFound();
    typename T::iterator it;
    it = container.begin();
    for (; it != container.end(); ++it) {
        if (*it == symbol)
            return (it);
    }
    throw errorNotFound();
}


#endif