#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    fastio();
    ll n;
    cin >> n;

    ll total = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Tetrahedron") total += 4;
        else if (s == "Cube") total += 6;
        else if (s == "Octahedron") total += 8;
        else if (s == "Dodecahedron") total += 12;
        else if (s == "Icosahedron") total += 20;
    }

    cout << total << endl;
    return 0;
}
