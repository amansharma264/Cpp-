#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i<n; i++){
            cin >> a[i];
        }
        if(n <= 2){
            cout << -1 << '\n';
            continue;
        }
        sort(a.begin(), a.end());
        ll Sum = 0;
        for(ll x : a){
            Sum += x;
        }
        ll low = 0;
        ll high = 1e18;
        ll ans = - 1;
        while(low <= high){
            ll mid = low + (high - low)/2;
            ll totalSum = Sum + mid;

            ll unhappyPeople = 0;
            for(ll i = 0; i<n; i++){
                if(2ll* n * a[i] < totalSum){
                    unhappyPeople++;
                }
            }
            if(unhappyPeople > n/2){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << ans << '\n';
    }
}