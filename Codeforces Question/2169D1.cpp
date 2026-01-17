#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        ll low = 1;
        ll high = (ll)1e18;
        ll ans = -1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            ll div = mid / y;

            ll removed;
            if (div > mid / x) {
                removed = mid;
            } else {
                removed = x * div;
            }

            ll remaining = mid - removed;

            if (remaining >= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
