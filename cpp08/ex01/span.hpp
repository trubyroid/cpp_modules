#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class span {
        std::vector<int> nums;
        unsigned int size;
        span();
    public:
        span(int N);
        span(const span &copy);
        ~span();

        span &operator = (const span &obj);

        void addNumber(int fill);
        unsigned int ShortestSpan() const;
        unsigned int LongestSpan() const;
        void    FillSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
        void    print() const;
    
        class ErrorSize: public std::exception {
            virtual const char *what() const throw();
        };
        class ErrorFill: public std::exception {
            virtual const char *what() const throw();
        };
        class ErrorSpan: public std::exception {
            virtual const char *what() const throw();
        };
};



#endif