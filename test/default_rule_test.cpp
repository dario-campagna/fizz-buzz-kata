#include "gtest/gtest.h"
#include "../src/default_rule.h"

TEST(DefaultRuleTest, ReturnGivenNumberAsText) {
    DefaultRule rule;
    ASSERT_EQ("2", rule.applyTo(2));
}