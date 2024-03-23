#include<iostream>
#include"check_palindrome.h"

using namespace std;

int main(){
    cout<<"Input: ";
    string str;
    getline(cin,str);
    cout<<"check is palindrome";
    cout<<(bool)check_palindrome(str);
    return 0;
}
