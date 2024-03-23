#include"check_palindrome.h"

bool check_palindrome(string word) {
	int lenght_word = word.length();
	for (int i = 0; i < lenght_word / 2; i++) {
		if (word[i] != word[lenght_word - 1 - i]) {
			return false;
		}
	}
	return true;
}