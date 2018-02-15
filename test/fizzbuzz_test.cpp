#include "gtest/gtest.h"
#include "../src/fizzbuzz.h"

void check(std::string expected, int number) {
    FizzBuzz fizzBuzz;
    ASSERT_EQ(expected, fizzBuzz.convert(number));
}

void ASSERT_VECTOR_EQ(std::vector<std::string> expected, std::vector<std::string> actual) {
    ASSERT_EQ(expected.size(), actual.size());
    for (int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
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

TEST(FizzBuzzTest, MultipleOfThreeAndFiveIsFizzBuzz) {
    check("FizzBuzz", 15);
}

TEST(FizzBuzzTest, PrintNumbers) {
    ASSERT_VECTOR_EQ({"1","2"}, FizzBuzz::print({1,2}));
    ASSERT_VECTOR_EQ({"1", "2", "Fizz", "4", "Buzz", "FizzBuzz"}, FizzBuzz::print({1,2,3,4,5,15}));
}