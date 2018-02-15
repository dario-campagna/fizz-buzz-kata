#ifndef FIZZBUZZ_FIZZBUZZ_H
#define FIZZBUZZ_FIZZBUZZ_H

#include <string>
#include <vector>

class FizzBuzz {
public:
    static std::vector<std::string> print(std::vector<int> numbers);

    static std::string convert(int number);

private:

    static bool isMultipleOfThree(int number);

    static bool isMultipleOfFive(int number);
};

#endif //FIZZBUZZ_FIZZBUZZ_H
