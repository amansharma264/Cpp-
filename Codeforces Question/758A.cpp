#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i<n; i++){
        cin >> a[i];
    }
    ll maxWelfare = *max_element(a.begin(), a.end());
    ll total = 0;
    for(ll i = 0; i<n; i++){
        total += (maxWelfare-a[i]);
    }
    cout << total << '\n';
}