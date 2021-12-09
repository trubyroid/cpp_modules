#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        MutantStack() : std::stack<T> () {}
        MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
        ~MutantStack() {};

        MutantStack &operator=(MutantStack<T> const &obj) {
            return (std::stack<T>::operator=(obj));
        }

        iterator begin() {
            return (this->c.begin());
        }
        iterator end() {
            return (this->c.end());
        }
        const_iterator cbegin() {
            return (this->c.cbegin());
        }
        const_iterator cend() {
            return (this->c.cend());
        }
};

#endif