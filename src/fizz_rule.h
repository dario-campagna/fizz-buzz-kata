#ifndef FIZZBUZZ_FIZZ_RULE_H
#define FIZZBUZZ_FIZZ_RULE_H

#include <string>
#include "default_rule.h"

class FizzRule {
public:
    FizzRule(DefaultRule rule);
    std::string applyTo(int number);

private:
    DefaultRule rule;
};

#endif //FIZZBUZZ_FIZZ_RULE_H
