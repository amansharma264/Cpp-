#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        string s = "codeforces";
        char c;
        cin >> c; 
        bool found = false;
        for(char ch : s){
            if(ch == c){
                found = true;
                break;
            }
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
