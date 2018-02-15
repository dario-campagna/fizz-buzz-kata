#include "gtest/gtest.h"
#include "../src/fizzbuzz.h"

void check(std::string expected, int number) {
    ASSERT_EQ(expected, FizzBuzz::print(number));
}

TEST(FizzBuzzTest, DefaultIsGivenNumber) {
    check("1", 1);
}

TEST(FizzBuzzTest, MultipleOfThreeIsFizz) {
    check("Fizz", 9);
}

TEST(FizzBuzzTest, MultipleOfFiveIsBuzz) {
    check("Buzz", 25);
}