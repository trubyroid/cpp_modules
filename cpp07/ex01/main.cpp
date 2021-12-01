#include "iter.hpp"

int main() {
    int arrayInt[] = {10,20,30, 40};
    iter(arrayInt, 4, &function);
    std::string arrayStr[] = {"Hello", "my", "dear"};
    iter(arrayStr, 3, &function);
    float arrayFl[] = {2.0f, 3.45f, 789.9f};
    iter(arrayFl, 3, &function);
    double arrayDbl[] = {2.0, 3.45, 789.9};
    iter(arrayDbl, 3, &function);
    char arrayCh[] = {'S', 'o', 'S'};
    iter(arrayCh, 3, &function);
    return 0;
}