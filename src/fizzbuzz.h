#ifndef FIZZBUZZ_FIZZBUZZ_H
#define FIZZBUZZ_FIZZBUZZ_H

#include <string>
#include <vector>
#include "rule.h"

class FizzBuzz {
public:
    FizzBuzz(Rule* rule);
    std::vector<std::string> print(std::vector<int> numbers);
private:
    Rule* rule;
};

#endif //FIZZBUZZ_FIZZBUZZ_H
