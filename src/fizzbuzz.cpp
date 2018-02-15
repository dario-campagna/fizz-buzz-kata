#include "fizzbuzz.h"
#include <algorithm>
#include <iostream>

FizzBuzz::FizzBuzz(Rule* rule) {
    FizzBuzz::rule = rule;
}

std::vector<std::string> FizzBuzz::print(std::vector<int> numbers) {
    std::vector<std::string> result(numbers.size());
    std::transform(numbers.begin(), numbers.end(), result.begin(), [=](int n) -> std::string { return this->rule->applyTo(n);});
    return result;
}

