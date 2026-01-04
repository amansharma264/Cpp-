#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int odd = 0, even = 0;
        for (int i = 0; i < 2*n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) even++;
            else odd++;
        }

        if (odd == even)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
