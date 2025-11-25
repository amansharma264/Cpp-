#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        if(v[0] == -1) v[0] = 0;

        for(ll i = 0; i < n; i++){
            if(v[i] == -1){
                ll j = i;
                while(j < n && v[j] == -1) j++;

                ll left = v[i - 1];
                ll right;

                if(j < n) right = v[j];
                else right = 0;

                ll len = j - i;

                for(ll k = 0; k < len; k++){
                    v[i + k] = left + (right - left) * (k + 1) / (len + 1);
                }

                i = j - 1;
            }
        }

        ll sum = abs(v[n - 1] - v[0]);
        cout << sum << endl;

        for(ll i = 0; i < n; i++){
            cout << v[i];
            if(i < n - 1) cout << " ";
        }
        cout << endl;
    }
}
