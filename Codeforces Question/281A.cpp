#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++){
        if(i == 0 && s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    cout << s << endl;
}