#ifndef FIZZBUZZ_FIZZ_RULE_H
#define FIZZBUZZ_FIZZ_RULE_H

#include <string>
#include "rule.h"

class FizzRule: public Rule {
public:
    explicit FizzRule(Rule* rule);
    std::string applyTo(int number) override ;

private:
    Rule* rule;
};

#endif //FIZZBUZZ_FIZZ_RULE_H
