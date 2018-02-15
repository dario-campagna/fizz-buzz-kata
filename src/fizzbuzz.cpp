#include "fizzbuzz.h"

std::string FizzBuzz::print(int number) {
    std::string text = "";
    if (isMultipleOfThree(number)) {
        text += "Fizz";
    }
    if (isMultipleOfFive(number)) {
        text += "Buzz";
    }
    if (text.empty()){
        text = std::to_string(number);
    }
    return text;
}

bool FizzBuzz::isMultipleOfFive(int number) { return number % 5 == 0; }

bool FizzBuzz::isMultipleOfThree(int number) { return number % 3 == 0; }

