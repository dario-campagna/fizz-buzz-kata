add_executable(unittests
        fizzbuzz_test.cpp ../src/fizzbuzz.cpp
        default_rule_test.cpp ../src/default_rule.cpp
        fizz_rule_test.cpp ../src/fizz_rule.cpp ../src/rule.h
        buzz_rule_test.cpp ../src/buzz_rule.cpp)
target_link_libraries(unittests gtest_main)
