#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    ll n;
    cin >> n;
    if (n >= 0) {
        cout << n << endl;
    } else {
        ll lastDigit = n / 10;
        ll secondLast = (n / 100) * 10 + (n % 10);
        cout << max(lastDigit, secondLast) << endl;
    }
}
