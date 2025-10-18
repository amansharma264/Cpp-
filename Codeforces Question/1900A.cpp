#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0; 
        stringstream ss(s);
        string segment;
        while (getline(ss, segment, '#')) {
            int len = segment.size();
            if (len == 0) continue;
            if (len == 1) ans += 1;
            else if (len == 2) ans += 2;
            else ans += 2;
        }

        cout << ans << "\n";
    }
    return 0;
}
