#include "fizzbuzz.h"

std::string FizzBuzz::print(int number) {
    if (isMultipleOfThree(number)) {
        return "Fizz";
    } else if (isMultipleOfFive(number)) {
        return "Buzz";
    }
    return std::to_string(number);
}

bool FizzBuzz::isMultipleOfFive(int number) { return number % 5 == 0; }

bool FizzBuzz::isMultipleOfThree(int number) { return number % 3 == 0; }

