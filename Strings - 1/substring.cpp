#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    // s.substr(idx) 
    // cout << s.substr(1,3);
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    // abcdefgh => n = 8
    int n = str.length();
    cout << str.substr(n/2);
}