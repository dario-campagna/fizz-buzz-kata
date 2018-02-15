#ifndef FIZZBUZZ_BUZZ_RULE_H
#define FIZZBUZZ_BUZZ_RULE_H

#include <string>
#include "rule.h"

class BuzzRule: public Rule {
public:
    explicit BuzzRule(Rule* rule);
    std::string applyTo(int number) override ;

private:
    Rule* rule;
};

#endif //FIZZBUZZ_BUZZ_RULE_H
