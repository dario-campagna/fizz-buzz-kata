#include "fizz_rule.h"

FizzRule::FizzRule(Rule* rule) {
    FizzRule::rule = rule;
}

std::string FizzRule::applyTo(int number) {
    if (number % 3 == 0){
        return "Fizz";
    }
    return FizzRule::rule->applyTo(number);
}