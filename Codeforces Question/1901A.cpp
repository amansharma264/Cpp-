#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

void lineTrip() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }

    ll maxGap = a[0];
    for(ll i = 1; i < n; i++){
        maxGap = max(maxGap, a[i] - a[i - 1]);
    }
    ll lastGap = x - a[n - 1];

    ll ans = max(maxGap, 2 * lastGap);
    cout << ans << '\n';
}

int main() {
    fastio();
    ll t;
    cin >> t;
    while(t--){
        lineTrip();
    }
    return 0;
}
