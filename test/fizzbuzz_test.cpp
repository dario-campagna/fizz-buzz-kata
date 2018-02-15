#include "gtest/gtest.h"
#include "../src/fizzbuzz_factory.h"

void ASSERT_VECTOR_EQ(std::vector<std::string> expected, std::vector<std::string> actual) {
    ASSERT_EQ(expected.size(), actual.size());
    for (int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}

TEST(FizzBuzzTest, PrintNumbers) {
    FizzBuzz* fizzBuzz = FizzBuzzFactory::game();
    ASSERT_VECTOR_EQ({"1", "2", "Fizz", "4", "Buzz", "FizzBuzz"}, fizzBuzz->print({1,2,3,4,5,120}));
}