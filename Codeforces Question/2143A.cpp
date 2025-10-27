#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define endl '\n'

const ll MOD = 1e9 + 7;
const ll INF = 1e18;


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("popcnt,lzcnt,bmi,bmi2")
#pragma GCC target("avx2,fma") 

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];

        bool check = true;
        ll curr = 1;
        ll l = 0, r = n - 1;
        while (curr <= n) {
            if (v[l] == curr) {
                curr++; l++;
            } else if (v[r] == curr) {
                curr++; r--;
            } else {
                check = false;
                break;
            }
        }

        cout << (check ? "YES" : "NO") << endl;
    }

    return 0;
}
