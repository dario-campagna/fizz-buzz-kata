#ifndef FIZZBUZZ_FIZZBUZZ_H
#define FIZZBUZZ_FIZZBUZZ_H

#include <string>

struct FizzBuzz {
    static std::string print(int number);

    static bool isMultipleOfThree(int number);

    static bool isMultipleOfFive(int number);
};

#endif //FIZZBUZZ_FIZZBUZZ_H
