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
        vector<ll> a(n);
        for(ll i = 0; i<n; i++){
            cin >> a[i];
        }

        if(a[0] == a[1]){
            for(ll i = 2; i<n; i++){
                if(a[i] != a[0]){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
        else{
            if(a[0] == a[2]){
                cout << 2 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
    }
}
