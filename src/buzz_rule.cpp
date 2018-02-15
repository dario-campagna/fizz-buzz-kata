#include "buzz_rule.h"

BuzzRule::BuzzRule(Rule* rule) {
    BuzzRule::rule = rule;
}

std::string BuzzRule::applyTo(int number) {
    if (number % 5 == 0){
        return "Buzz";
    }
    return BuzzRule::rule->applyTo(number);
}
