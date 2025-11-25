#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> ajisai(n), mai(n);
        for (int i = 0; i < n; i++) {
            // i % 2 == 0: Ajisai's move (1-based odd), Ajisai takes max, Mai takes min
            // i % 2 == 1: Mai's move (1-based even), Mai takes max, Ajisai takes min
            if (i % 2 == 0) {
                ajisai[i] = max(a[i], b[i]);
                mai[i]    = min(a[i], b[i]);
            } else {
                ajisai[i] = min(a[i], b[i]);
                mai[i]    = max(a[i], b[i]);
            }
        }

        int xora = 0, xorm = 0;
        for (int i = 0; i < n; i++) {
            xora ^= ajisai[i];
            xorm ^= mai[i];
        }

        if (xora > xorm)
            cout << "Ajisai\n";
        else if (xora < xorm)
            cout << "Mai\n";
        else
            cout << "Tie\n";
    }
    return 0;
}
