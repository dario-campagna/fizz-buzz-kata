#include <iostream>
#include <algorithm>
#include "fizzbuzz_factory.h"

int main() {
	FizzBuzz* fizzBuzz = FizzBuzzFactory::game();
	std::vector<int> numbers(100);
	std::iota(numbers.begin(), numbers.end(), 1);
	for(std::string numberAsText : fizzBuzz->print(numbers)) {
		std::cout << numberAsText << " ";
	}
	return 0;
}
