#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int i, int j){
    if(i > j) return true;
    if(s[i] != s[j]) return false;
    return isPalindrome(s, i+1, j-1);
}

void beautifulString(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(isPalindrome(s, 0, n-1)){
        cout << 0 << endl;
        return;
    }

    string s1 = "";
    int zerocount = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != '0') s1 += s[i];
        else zerocount++;
    }

    if(isPalindrome(s1, 0, s1.size()-1)){
        cout << zerocount << endl;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') cout << i + 1 << " ";
        }
        cout << endl;
        return;
    }

    string s2 = "";
    int onecount = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != '1') s2 += s[i];
        else onecount++;
    }

    if(isPalindrome(s2, 0, s2.size()-1)){
        cout << onecount << endl;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') cout << i + 1 << " ";
        }
        cout << endl;
        return;
    }

    cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        beautifulString();
    }
}
