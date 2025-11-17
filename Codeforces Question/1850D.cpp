#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define ld long double
#define endl '\n'

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll curr = 1;
        ll max_len = 1;

        for(ll i = 1; i < n; i++){
            if(a[i] - a[i-1] <= k){
                curr++;
            } else {
                curr = 1;
            }
            max_len = max(max_len, curr);
        }

        cout << (n - max_len) << endl;
    }
    return 0;
}
