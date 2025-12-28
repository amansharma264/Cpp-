#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    string r;
    cin >> r;
    int n = r.size();
    int operations = 0;

    if (r[0] == 'u') {
        r[0] = 's';
        operations++;
    }

    if (r[n - 1] == 'u') {
        r[n - 1] = 's';
        operations++;
    }

    for (int i = 0; i < n - 1; i++) {
        if (r[i] == 'u' && r[i + 1] == 'u') {
            r[i + 1] = 's';
            operations++;
        }
    }

    int s_count = 0;
    for (char c : r) {
        if (c == 's') s_count++;
    }

    if (s_count < 2) {
        operations += (2 - s_count);
    }

    cout << operations << '\n';
}

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
