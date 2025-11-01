#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    string s;
    cin >> s;
    vector<string> v(n);
    for(ll i = 0; i<s.size(); i++){
        cin >> s[i];
    }
    for(ll i = 0; i<s.size(); i++){
        if(s[i] != s[i+1]){
            v.push_back(s[i]);
        }
    }
}
