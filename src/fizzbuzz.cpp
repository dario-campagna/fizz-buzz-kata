#include "fizzbuzz.h"
#include <algorithm>


std::vector<std::string> FizzBuzz::print(std::vector<int> numbers) {
    std::vector<std::string> result(numbers.size());
    std::transform(numbers.begin(), numbers.end(), result.begin(), FizzBuzz::convert);
    return result;
}

std::string FizzBuzz::convert(int number) {
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

