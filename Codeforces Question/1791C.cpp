#include<iostream>
#include<string>
using namespace std;

void prependAndappend(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int l = 0;
    int r = n - 1;
    while(l < r && s[l] != s[r]) {
        l++;
        r--;
    }
    cout << (r - l + 1) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        prependAndappend();
    }
}
