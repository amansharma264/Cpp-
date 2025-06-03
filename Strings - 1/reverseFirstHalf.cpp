#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    // reverse 1st half
    int n = s.length();
    reverse(s.begin(), s.begin()+ n/2);
    cout << s << endl;
}