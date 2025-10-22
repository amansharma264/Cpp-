#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string digits = "";
    int one = 0, two = 0, three = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '1') one++;
        else if(s[i] == '2') two++;
        else if(s[i] == '3') three++;
    }
    bool flag = true;
    for(int i = 0; i<one; i++){
        if(!flag) cout << "+";
        cout << "1";
        flag = false;
    }
    for(int i = 0; i<two; i++){
        if(!flag) cout << "+";
        cout << "2";
        flag = false;
    }
    for(int i = 0; i<three; i++){
        if(!flag) cout << "+";
        cout << "3";
        flag = false;
    }
    cout << endl;
}