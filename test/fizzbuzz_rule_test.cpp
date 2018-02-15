#include "gtest/gtest.h"
#include "../src/fizzbuzz_rule.h"
#include "../src/default_rule.h"

TEST(FizzBuzzRuleTest, MultipleOfThreeAndFiveIsFizzBuzz) {
    FizzBuzzRule rule(nullptr);
    ASSERT_EQ("FizzBuzz", rule.applyTo(120));
}

TEST(FizzRuleTest, ApplyGivenRuleIfNotMultipleOfThreeAndFive) {
    DefaultRule defaultRule;
    FizzBuzzRule rule(&defaultRule);
    ASSERT_EQ("110", rule.applyTo(110));
}