#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

void numberMaze() {
    string n;
    ll j, k;
    cin >> n >> j >> k;

    sort(n.begin(), n.end());
    vector<string> v;

    do {
        v.push_back(n);
    } while (next_permutation(n.begin(), n.end()));

    string a = v[j - 1];
    string b = v[k - 1];

    int A = 0, B = 0;
    int len = a.size();

    for (int i = 0; i < len; i++) {
        if (a[i] == b[i]) A++;
    }
    
    for (int i = 0; i < len; i++) {
        for (int p = 0; p < len; p++) {
            if (i != p && a[i] == b[p]) {
                B++;
            }
        }
    }

    cout << A << "A" << B << "B" << endl;
}

int main() {
    fastio();
    ll t;
    cin >> t;
    while (t--) {
        numberMaze();
    }
    return 0;
}
