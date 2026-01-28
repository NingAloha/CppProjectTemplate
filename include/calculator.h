#ifndef CALCULATOR_H
#define CALCULATOR_H

namespace calculator {

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    // Basic arithmetic operations
    int add(int a, int b) const;
    int subtract(int a, int b) const;
    int multiply(int a, int b) const;
    double divide(int a, int b) const;
};

}  // namespace calculator

#endif  // CALCULATOR_H
