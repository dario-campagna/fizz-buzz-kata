#ifndef FIZZBUZZ_RULE_H
#define FIZZBUZZ_RULE_H

#include <string>

class Rule {
public:
    virtual std::string applyTo(int number) {return "";}
};

#endif //FIZZBUZZ_RULE_H
