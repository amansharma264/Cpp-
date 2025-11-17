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
        ll x, k;
        cin >> x >> k;
        if(x % k == 0){
            cout << 2 << '\n';
            cout << 1 << " " << x - 1 << '\n';
        }
        else{
            cout << 1 << '\n';
            cout << x << '\n';
        }
    }
}