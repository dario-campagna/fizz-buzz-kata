#include "fizzbuzz_rule.h"

FizzBuzzRule::FizzBuzzRule(Rule *rule) {
    FizzBuzzRule::rule = rule;
}

std::string FizzBuzzRule::applyTo(int number) {
    if (number % 15 == 0){
        return "FizzBuzz";
    }
    return rule->applyTo(number);
}
