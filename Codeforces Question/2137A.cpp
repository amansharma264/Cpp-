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
        ll k, x;
        cin >> k >> x;
        while(k--){
            x *= 2;
        }
        cout << x << '\n';
    }
}