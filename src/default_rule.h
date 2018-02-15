#ifndef FIZZBUZZ_DEFAULT_RULE_H
#define FIZZBUZZ_DEFAULT_RULE_H

#include <string>
#include "rule.h"

class DefaultRule: public Rule {
public:
    std::string applyTo(int number) override ;
};

#endif //FIZZBUZZ_DEFAULT_RULE_H
