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
        string s;
        cin >> s;
        ll a = s[0] - '0';
        ll b = s[2] - '0';

        cout << a + b << '\n';
    }
}