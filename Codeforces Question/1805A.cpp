#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int xorAll = 0;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        xorAll ^= a;
    }

    if(n % 2 == 1) {
        cout << xorAll << endl;
    } else {
        if(xorAll == 0) cout << 0 << endl;
        else cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
