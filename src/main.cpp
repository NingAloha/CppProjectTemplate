#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "Sum: " << (a + b) << std::endl;
    std::cout << "Diff: " << (a - b) << std::endl;
    std::cout << "Prod: " << (a * b) << std::endl;
    if (b != 0) {
        std::cout << "Div: " << (a / b) << std::endl;
    } else {
        std::cout << "Div: Undefined (division by zero)" << std::endl;
    }
    return 0;
}
