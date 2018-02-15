#include "gtest/gtest.h"
#include "../src/fizz_rule.h"
#include "../src/default_rule.h"

TEST(FizzRuleTest, MultipleOfThreeIsFizz) {
    DefaultRule defaultRule;
    FizzRule rule(&defaultRule);
    ASSERT_EQ("Fizz", rule.applyTo(9));
}

TEST(FizzRuleTest, ApplyGivenRuleIfNotMultipleOfThree) {
    DefaultRule defaultRule;
    FizzRule rule(&defaultRule);
    ASSERT_EQ("11", rule.applyTo(11));
}