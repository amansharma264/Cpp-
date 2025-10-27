#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    ll t;
    cin >> t;
    while (t--) {
        ll rating;
        cin >> rating;
        if (rating >= 1900) {
            cout << "Division 1\n";
        }
        else if (rating >= 1600 && rating <= 1899) {
            cout << "Division 2\n";
        }
        else if (rating >= 1400 && rating <= 1599) {
            cout << "Division 3\n";
        }
        else {
            cout << "Division 4\n";
        }
    }
}
