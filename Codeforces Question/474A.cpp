#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    char dir;
    string typed;
    cin >> dir >> typed;
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for (char c : typed) {
        int idx = keys.find(c);
        if (dir == 'R') {
            cout << keys[idx - 1]; 
        } else {
            cout << keys[idx + 1];
        }
    }
    cout << endl;
    return 0;
}