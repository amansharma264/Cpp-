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
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll mn = LLONG_MAX;
        ll idx = -1;
        for(ll i = 0; i < n; i++){
            if(a[i] < mn){
                mn = a[i];
                idx = i;
            }
        }
        a[idx]++;
        ll product = 1;
        for(ll i = 0; i < n; i++){
            product *= a[i];
        }
        cout << product << endl;
    }
}
