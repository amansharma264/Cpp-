#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int s, k, m;
        cin >> s >> k >> m;

        if(m < k) {
            cout << max(0LL, s - m) << endl;
        } else {
            int time = m % k;
            int sand = min(s, k);
            cout << max(0LL, sand - time) << endl;
        }
    }

    return 0;
}
