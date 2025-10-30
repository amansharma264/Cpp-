#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    string p;
    cin >> p;
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
