#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename someType>
void swap(someType &a, someType &b) {
    someType c;
    c = a;
    a = b;
    b = c;
}

template <typename someType>
someType min(someType &a, someType &b) {
    return (b <= a ? b : a);
}

template <typename someType>
someType max(someType &a, someType &b) {
    return (b >= a ? b : a);
}

#endif