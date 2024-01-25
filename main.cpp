#include <iostream>
#include "calculator.h"

int main() {
    Calculator MyCalculator;

    double res_add = MyCalculator.Add(5, 4);
    double res_sub = MyCalculator.Sub(5, 4);
    std::cout << "a + b + 0.5 = " << res_add << std::endl;
    std::cout << "a - b = " << res_sub << std::endl;
    return 0;
}
