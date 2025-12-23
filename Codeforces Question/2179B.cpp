#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long total = 0;
        for (int i = 1; i < n; i++) {
            total += llabs(a[i] - a[i - 1]);
        }

        long long maxGain = 0;

        maxGain = max(maxGain, llabs(a[1] - a[0]));

        maxGain = max(maxGain, llabs(a[n - 1] - a[n - 2]));

        for (int i = 1; i + 1 < n; i++) {
            long long gain =
                llabs(a[i] - a[i - 1]) +
                llabs(a[i + 1] - a[i]) -
                llabs(a[i + 1] - a[i - 1]);
            maxGain = max(maxGain, gain);
        }

        cout << total - maxGain << "\n";
    }
    return 0;
}
