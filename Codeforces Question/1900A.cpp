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
        int n;
        string s;
        cin >> n >> s;

        int empty = 0;
        for (char c : s)
            if (c == '.') empty++;

        int ans = empty;             
        for (int i = 1; i + 1 < n; i++) {
            if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
                ans = 2;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}