#include<string>
#include<iostream>
#include"delSym.h"
#include"check_polindrom.h"


using namespace std;

int main(){
    cout<<"Input: ";
    string str;
    getline(cin,str);
    cout<<"choose (1 (delete Symbols) / 2 (check is polindrom)))";
    int num;
    cin>>num;
    switch (num)
    {
    case 1:
    {
        delSym(str);
        cout<<str;
        break;
    }
    case 2:
    {
        cout<<check_polindrom(str);
        break;
    }
    
    default:
        break;
    }
    return 0;
}
