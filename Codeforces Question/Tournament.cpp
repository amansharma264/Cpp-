#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int aj = a[j - 1]; // converting to 0-based if necessary, but the count is same
        int count = 0;
        for (int num : a) {
            if (num <= aj) {
                count++;
            }
        }
        if (count >= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}