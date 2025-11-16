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
        ll a,b,k;
        cin >> a >> b >> k;
        if(a == 0 && b == 0){
            cout << 0 << '\n';
        }
        else if(a <= k && b <= k){
            cout << 1 << '\n';
        }
        else{
            cout << 2 << '\n';
        }
    }
}