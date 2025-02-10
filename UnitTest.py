from Solution import Solution
from timeout_decorator import timeout
import unittest

class UnitTest(unittest.TestCase):
    def setUp(self):
        self.__solution = Solution()
        self.__testcases = {
            "no_digits_in_the_string": ("abc", "abc"),
            "string_with_digits_at_the_end": ("abc123", ""),
            "string_with_digits_at_the_beginning": ("123abc", "abc"),
            "string_with_digits_in_the_middle": ("a1b2c3", ""),
            "string_with_multiple_digits_and_non_digits": ("a1b2c3d4", ""),
            "string_with_only_one_character_digit": ("1", ""),
            "string_with_only_one_character_non_digit": ("a", "a"),
            "empty_string": ("", "")
        }
        return super().setUp()
    
    @timeout(0.5)
    def test_case_no_digits_in_the_string(self):
        s, expected = self.__testcases["no_digits_in_the_string"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_string_with_digits_at_the_end(self):
        s, expected = self.__testcases["string_with_digits_at_the_end"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_string_with_digits_at_the_beginning(self):
        s, expected = self.__testcases["string_with_digits_at_the_beginning"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_string_with_digits_in_the_middle(self):
        s, expected = self.__testcases["string_with_digits_in_the_middle"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_string_with_multiple_digits_and_non_digits(self):
        s, expected = self.__testcases["string_with_multiple_digits_and_non_digits"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_string_with_only_one_character_digit(self):
        s, expected = self.__testcases["string_with_only_one_character_digit"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_string_with_only_one_character_non_digit(self):
        s, expected = self.__testcases["string_with_only_one_character_non_digit"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_empty_string(self):
        s, expected = self.__testcases["empty_string"]
        result = self.__solution.clearDigits(s)
        self.assertEqual(result, expected)

if __name__ == '__main__':
    unittest.main()