#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long dist = abs(a - b);
        long long n = 2 * dist;

        if (a > n || b > n || c > n) {
            cout << -1 << '\n';
            continue;
        }

        if (c + dist <= n)
            cout << c + dist << '\n';
        else
            cout << c - dist << '\n';
    }

    return 0;
}
