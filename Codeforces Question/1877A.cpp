#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

void goals(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i<n-1; i++){
        cin >> a[i];
    }
    ll sum = 0;
    for(ll i = 0; i<n-1; i++){
        sum += a[i];
    }
    cout << -1* sum << '\n';
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        goals();
    }
}