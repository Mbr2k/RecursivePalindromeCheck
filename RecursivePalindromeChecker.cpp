#include <string>
#include <iostream>

void palindrome_check(bool&, std::string, int);

int main() {
	bool is_palindrome = false;
	palindrome_check(is_palindrome, "ooo", 0);
	std::cout << is_palindrome;
	return 0;
}

void palindrome_check(bool & is_palindrome, std::string test_word, int index) {
	int length = test_word.length() - 1;
	
	if (test_word[index] == test_word[length - index]) {
		if (0 == index - length) {
			is_palindrome = true;
		}
		else palindrome_check(is_palindrome, test_word, index + 1);
	}
}