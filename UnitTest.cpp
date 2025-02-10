#include <iostream>
#include <unordered_map>
#include "Solution.hpp"

class UnitTest {
private:
    Solution solution;
    unordered_map<string, pair<string, string>> testcases;
    void test_case_no_digits_in_the_string() {
        string s = testcases["no_digits_in_the_string"].first;
        string expected = testcases["no_digits_in_the_string"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_no_digits_in_the_string: " << ((result == expected) ? "passed": "failed") << endl;
    }
    void test_case_string_with_digits_at_the_end() {
        string s = testcases["string_with_digits_at_the_end"].first;
        string expected = testcases["string_with_digits_at_the_end"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_string_with_digits_at_the_end: " << ((result == expected) ? "passed": "failed") << endl;
    }
    void test_case_string_with_digits_at_the_beginning() {
        string s = testcases["string_with_digits_at_the_beginning"].first;
        string expected = testcases["string_with_digits_at_the_beginning"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_string_with_digits_at_the_beginning: " << ((result == expected) ? "passed": "failed") << endl;
    }
    void test_case_string_with_digits_in_the_middle() {
        string s = testcases["string_with_digits_in_the_middle"].first;
        string expected = testcases["string_with_digits_in_the_middle"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_string_with_digits_in_the_middle: " << ((result == expected) ? "passed": "failed") << endl;
    }
    void test_case_string_with_multiple_digits_and_non_digits() {
        string s = testcases["string_with_multiple_digits_and_non_digits"].first;
        string expected = testcases["string_with_multiple_digits_and_non_digits"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_string_with_multiple_digits_and_non_digits: " << ((result == expected) ? "passed": "failed") << endl;
    }
    void test_case_string_with_only_one_character_digit() {
        string s = testcases["string_with_only_one_character_digit"].first;
        string expected = testcases["string_with_only_one_character_digit"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_string_with_only_one_character_digit: " << ((result == expected) ? "passed": "failed") << endl;
    }
    void test_case_string_with_only_one_character_non_digit() {
        string s = testcases["string_with_only_one_character_non_digit"].first;
        string expected = testcases["string_with_only_one_character_non_digit"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_string_with_only_one_character_non_digit: " << ((result == expected) ? "passed": "failed") << endl;
    }
    void test_case_empty_string() {
        string s = testcases["empty_string"].first;
        string expected = testcases["empty_string"].second;
        string result = solution.clearDigits(s);
        cout << "test_case_empty_string: " << ((result == expected) ? "passed": "failed") << endl;
    }
public:
    UnitTest() {
        testcases = {{"no_digits_in_the_string", {"abc", "abc"}},
                     {"string_with_digits_at_the_end", {"abc123", ""}},
                     {"string_with_digits_at_the_beginning", {"123abc", "abc"}},
                     {"string_with_digits_in_the_middle", {"a1b2c3", ""}},
                     {"string_with_multiple_digits_and_non_digits", {"a1b2c3d4", ""}},
                     {"string_with_only_one_character_digit", {"1", ""}},
                     {"string_with_only_one_character_non_digit", {"a", "a"}},
                     {"empty_string", {"", ""}}
                    };
    }
    void test() {
        test_case_no_digits_in_the_string();
        test_case_string_with_digits_at_the_end();
        test_case_string_with_digits_at_the_beginning();
        test_case_string_with_digits_in_the_middle();
        test_case_string_with_multiple_digits_and_non_digits();
        test_case_string_with_only_one_character_digit();
        test_case_string_with_only_one_character_non_digit();
        test_case_empty_string();    
    }
};

int main() {
    UnitTest test;
    test.test();
}