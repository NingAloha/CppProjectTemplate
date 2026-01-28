#include <iostream>
#include "calculator.h"

int main() {
    calculator::Calculator calc;
    
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    std::cout << "Sum: " << calc.add(a, b) << std::endl;
    std::cout << "Diff: " << calc.subtract(a, b) << std::endl;
    std::cout << "Prod: " << calc.multiply(a, b) << std::endl;
    
    try {
        std::cout << "Div: " << calc.divide(a, b) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Div: Error - " << e.what() << std::endl;
    }
    
    return 0;
}
