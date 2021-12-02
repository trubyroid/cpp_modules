#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
        T *array;
        unsigned int size;
    public:
        Array<T>(int ArrSize = 1) {
            int i = -1;

            if (ArrSize == 0)
                ArrSize++;
            if (ArrSize < 0)
                throw errorSize();
            size = ArrSize;
            array = new T[ArrSize];
            while (++i < ArrSize)
                array[i] = 0;
        };

        Array<T>(const Array &copy) {
            this->operator=(copy);
        };

        ~Array<T>() {
            if (size)
                delete[] array;
        };

        Array<T> &operator = (Array<T> const &obj) {
            int i = -1;

            this->size = obj.size;
            array = new T[this->size];
            while (++i < this->size)
                array[i] = obj.array[i];
            return *this;
        };
        T &operator [] (int i) {
            if (i < 0 || i >= size)
                throw errorIndex();
            return (array[i]);
        };

        unsigned int getSize() const {return (size);};

        class errorIndex : public std::exception {
            virtual const char *what() const throw() {return ("Error of index.\n");};
        };
        class errorSize : public std::exception {
            virtual const char *what() const throw() {return ("Error of size.\n");};
        };
};

#endif