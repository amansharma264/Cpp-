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
        vector<ll> a(n);
        for(ll i = 0; i<n; i++){
            cin >> a[i];
        }
        ll flag = 0;
        for(ll i = 0; i<n; i++){
            for(ll j = i+1; j<n; j++){
                if(__gcd(a[i], a[j]) <= 2){
                    flag = 1;
                }
            }
        }
        if(flag == 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}