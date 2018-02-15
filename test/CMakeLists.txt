add_executable(unittests
        ../src/rule.h
        default_rule_test.cpp ../src/default_rule.cpp
        fizz_rule_test.cpp ../src/fizz_rule.cpp
        buzz_rule_test.cpp ../src/buzz_rule.cpp
        fizzbuzz_rule_test.cpp ../src/fizzbuzz_rule.cpp
        fizzbuzz_test.cpp ../src/fizzbuzz.cpp
        ../src/fizzbuzz_factory.cpp)
target_link_libraries(unittests gtest_main)
