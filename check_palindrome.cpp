#include"check_palindrome.h"

bool check_palindrome(string word) {
	string newstr;
	for(char x: word){
		if(x != 32){
			newstr.push_back(x);
		}
	}
	int lenght_word = newstr.length();
	for (int i = 0; i < lenght_word / 2; i++) {
		if (newstr[i] != newstr[lenght_word - 1 - i]) {
			return false;
		}
	}
	return true;
}