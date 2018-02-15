#include "gtest/gtest.h"
#include "../src/buzz_rule.h"
#include "../src/default_rule.h"

TEST(BuzzRuleTest, MultipleOfThreeIsBuzz) {
    BuzzRule rule(nullptr);
    ASSERT_EQ("Buzz", rule.applyTo(25));
}

TEST(BuzzRuleTest, ApplyGivenRuleIfNotMultipleOfThree) {
    DefaultRule defaultRule;
    BuzzRule rule(&defaultRule);
    ASSERT_EQ("12", rule.applyTo(12));
}