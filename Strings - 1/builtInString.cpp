#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str = "Aman sharma is at google";
    // cout << str.length();
    // int len = str.length();
    // string str = "abcd";
    // cout << str << endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout << str << endl;

    // string s = "Aman";
    // cout << s << endl;
    // s.pop_back();
    // cout << s << endl;

    // string s = "abc";
    // cout << s << endl;
    // string t = "def";
    // s = "xyz" + t;  // modify 
    //  cout << s << endl;

    string s = "abcdef";  // 0 1 2 3 4 5 
    cout << s << endl;
    reverse(s.begin()+2, s.begin()+5);
    cout << s << endl;
}