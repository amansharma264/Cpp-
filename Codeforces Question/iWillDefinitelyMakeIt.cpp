#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    for (int i = 0; i < n - 2; ++i) {
        if (h[i] <= h[i + 1] && h[i + 1] <= h[i + 2]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
