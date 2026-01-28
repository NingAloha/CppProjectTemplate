#include <gtest/gtest.h>
#include "calculator.h"

using namespace calculator;

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, AdditionTest) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(-5, -3), -8);
}

TEST_F(CalculatorTest, SubtractionTest) {
    EXPECT_EQ(calc.subtract(5, 3), 2);
    EXPECT_EQ(calc.subtract(3, 5), -2);
    EXPECT_EQ(calc.subtract(0, 0), 0);
}

TEST_F(CalculatorTest, MultiplicationTest) {
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-2, 3), -6);
    EXPECT_EQ(calc.multiply(0, 5), 0);
}

TEST_F(CalculatorTest, DivisionTest) {
    EXPECT_DOUBLE_EQ(calc.divide(6, 2), 3.0);
    EXPECT_DOUBLE_EQ(calc.divide(5, 2), 2.5);
    EXPECT_DOUBLE_EQ(calc.divide(-6, 2), -3.0);
}

TEST_F(CalculatorTest, DivisionByZeroTest) {
    EXPECT_THROW(calc.divide(5, 0), std::invalid_argument);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
