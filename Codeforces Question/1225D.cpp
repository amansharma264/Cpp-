#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<vector<pair<int,int>>, long long> mp;
    long long ans = 0;

    for (int x : a) {
        vector<pair<int,int>> cur, need;

        int temp = x;
        for (int p = 2; p * p <= temp; p++) {
            if (temp % p == 0) {
                int cnt = 0;
                while (temp % p == 0) {
                    temp /= p;
                    cnt++;
                }
                cnt %= k;
                if (cnt) {
                    cur.push_back({p, cnt});
                    need.push_back({p, (k - cnt) % k});
                }
            }
        }
        if (temp > 1) {
            int cnt = 1 % k;
            if (cnt) {
                cur.push_back({temp, cnt});
                need.push_back({temp, (k - cnt) % k});
            }
        }

        sort(cur.begin(), cur.end());
        sort(need.begin(), need.end());

        ans += mp[need];
        mp[cur]++;
    }

    cout << ans << '\n';
    return 0;
}
