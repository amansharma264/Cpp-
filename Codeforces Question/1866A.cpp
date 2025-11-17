#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i<n; i++){
        cin >> a[i];
    }
    ll minOperations = INT_MAX;
    for(ll i = 0; i<n; i++){
        minOperations = min(minOperations, abs(a[i]));
    }
    cout << minOperations << '\n';
}