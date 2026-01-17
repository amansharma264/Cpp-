#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

void solve() {
    long long n;
    cin >> n;

    if (n == 2) {
        cout << 2 << '\n';
    } else if (n == 3) {
        cout << 3 << '\n';
    } else {
        if (n % 2 == 0) {
            cout << 0 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
