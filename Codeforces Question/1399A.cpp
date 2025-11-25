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
        vector<int> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        bool ok = true;
        for(ll i = 1; i < n; i++){
            if(a[i] - a[i - 1] > 1){
                ok = false;
                break;
            }
        }

        if(ok){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
