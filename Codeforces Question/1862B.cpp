#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        ll b[n];
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<ll> a;
        a.push_back(b[0]);

        for(ll i = 1; i < n; i++) {
            if(b[i] >= b[i - 1]) {
                a.push_back(b[i]);
            } else {
                a.push_back(1); 
                a.push_back(b[i]);
            }
        }

        cout << a.size() << "\n";

        for(ll i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}