#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long

void amansharma264() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    unordered_map<ll,ll> freq;
    for(ll x: a) freq[x]++;

    ll mex = 0;
    while(freq[mex] > 0) mex++;

    if(mex == 0) {
        cout << "YES\n";
        return;
    }

    if(freq[mex] > 0) {
        cout << "YES\n";
        return;
    }

    if(freq[0] > 1) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main(){
    fastio();
    ll t; cin >> t;
    while(t--){
        amansharma264();
    }
}
