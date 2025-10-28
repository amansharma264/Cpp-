#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll answer = -1;
        for (ll x = 2; x <= 1000000; x++) {
            bool found = false;
            for (ll i = 0; i < n; i++) {
                if (__gcd(a[i], x) == 1) {
                    found = true;
                    break;
                }
            }
            if (found) {
                answer = x;
                break;
            }
        }
        cout << answer << endl;
    }
}
