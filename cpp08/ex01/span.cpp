#include "span.hpp"

span::span(int N) {
    if (N < 1)
        throw ErrorSize();
    size = N;
}

span::span(const span &copy) {
    this->operator=(copy);
}

span::~span() {}

span &span::operator = (const span &obj) {
    nums = obj.nums;
    size = obj.size;
    return (*this);
}

void span::addNumber(int value) {
    if (nums.size() >= size)
        throw ErrorFill();
    nums.push_back(value);
}

unsigned int span::ShortestSpan() const {
    if (nums.size() < 2)
        throw ErrorSpan();
    std::vector<int> vec(nums);
    std::sort(vec.begin(), vec.end());
    unsigned int gap = vec.at(1) - vec.at(0);
    for (int i = 0; i < (int)vec.size() - 1; i++) {
        if ((unsigned int)(vec.at(i + 1) - vec.at(i)) < gap)
            gap = vec.at(i + 1) - vec.at(i);
    }
    return (gap);
}

unsigned int span::LongestSpan() const {
    if (nums.size() < 2)
        throw ErrorSpan();
    std::vector<int>::const_iterator max, min;
    max = std::max_element(nums.begin(), nums.end());
    min = std::min_element(nums.begin(), nums.end());
    return (*max - *min);
}

void    span::FillSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) {
    if ((int)(end - begin) + (int)nums.size() > (int)size)
        throw ErrorFill();
    this->nums.insert(nums.begin(), begin, end);
}

void span::print() const {
    for (int i = 0; i < (int)nums.size(); i++) {
        std::cout << nums.at(i);
    }
}

const char *span::ErrorSize::what() const throw() {
    return ("Error: invalid size.\n");
}

const char *span::ErrorFill::what() const throw() {
    return ("Error: container is aready filled.\n");
}

const char *span::ErrorSpan::what() const throw() {
    return ("Error: no span to find.\n");
}