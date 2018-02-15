#include "gtest/gtest.h"
#include "../src/fizzbuzz.h"

TEST(FizzBuzzTest, DefaultIsGivenNumber) {
	ASSERT_EQ("1", FizzBuzz::print(1));
}
