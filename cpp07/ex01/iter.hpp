#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename ex>
void function(ex val) {
    std::cout << val << std::endl;
}

template <typename addr, typename len>
void iter(addr adress, len lenght, void (*func)(decltype(*std::declval<addr>()))) {
    len size = 0;
    while (size < lenght) {
        func(adress[size]);
        size++;
    }
}

#endif