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
        ll n;
        cin >> n;
        if(n % 2 != 0){
            cout << 0 << '\n';
        }
        else{
            cout << (n/4) + 1 << '\n';
        }
    }
}