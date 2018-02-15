#include "fizzbuzz.h"

std::string FizzBuzz::print(int number) {
    if (number % 3 == 0) {
        return "Fizz";
    } else if (number % 5 == 0) {
        return "Buzz";
    }
    return std::to_string(number);
}

