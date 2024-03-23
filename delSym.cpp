#include"delSym.h"

void delSym(string &Str) {
	string newStr;
	for (char x : Str) {
		int ch = x;
		if (int(x) == 32 ||/*space*/
			(48 <= x && x <= 57) ||/*0-9*/
			(65 <= x && x<= 90) ||/*A-Z*/
			(97 <= x && x <= 122) /*a-z*/) 
		{
			newStr.push_back(x);
		}
	}
	
	Str = newStr;

}