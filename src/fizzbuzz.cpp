#include "fizzbuzz.h"

std::string FizzBuzz::print(int number) {
    if (number % 3 == 0) {
        return "Fizz";
    }
    return std::to_string(number);
}

