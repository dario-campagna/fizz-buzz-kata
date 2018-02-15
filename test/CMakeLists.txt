add_executable(unittests fizzbuzz_test.cpp ../src/fizzbuzz.cpp default_rule_test.cpp ../src/default_rule.cpp)
target_link_libraries(unittests gtest_main)
