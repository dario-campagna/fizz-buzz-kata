#ifndef FIZZBUZZ_FIZZBUZZ_RULE_H
#define FIZZBUZZ_FIZZBUZZ_RULE_H

#include "rule.h"

class FizzBuzzRule: public Rule {
public:
    FizzBuzzRule(Rule* rule);
    std::string applyTo(int number) override ;

private:
    Rule* rule;
};

#endif //FIZZBUZZ_FIZZBUZZ_RULE_H
