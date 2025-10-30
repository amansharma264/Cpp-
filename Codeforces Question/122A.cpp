#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    fastio();
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
