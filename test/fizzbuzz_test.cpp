#include "gtest/gtest.h"
#include "../src/fizzbuzz.h"

TEST(FizzBuzzTest, DefaultIsGivenNumber) {
	ASSERT_EQ("1", FizzBuzz::print(1));
}

TEST(FizzBuzzTest, MultipleOfThreeIsFizz) {
    ASSERT_EQ("Fizz", FizzBuzz::print(3));
    ASSERT_EQ("Fizz", FizzBuzz::print(9));
}