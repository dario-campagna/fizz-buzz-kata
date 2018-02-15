#include "fizzbuzz_factory.h"
#include "default_rule.h"
#include "fizz_rule.h"
#include "buzz_rule.h"
#include "fizzbuzz_rule.h"

FizzBuzz* FizzBuzzFactory::game() {
    DefaultRule* defaultRule = new DefaultRule();
    FizzRule* fizzRule = new FizzRule(defaultRule);
    BuzzRule* buzzRule = new BuzzRule(fizzRule);
    FizzBuzzRule* fizzBuzzRule = new FizzBuzzRule(buzzRule);

    FizzBuzz* fizzBuzz = new FizzBuzz(fizzBuzzRule);
    return fizzBuzz;
}
