#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int popcount(ll x) {
    return __builtin_popcountll(x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int tt;
        cin >> tt;

        while (tt--) {
            ll n, k;
            cin >> n >> k;
            if ((n & k) == k) {
                ll diff = n ^ k;
                cout << popcount(diff) << '\n';
            } else {
                cout << "-1\n";
            }
        }
    }

    return 0;
}