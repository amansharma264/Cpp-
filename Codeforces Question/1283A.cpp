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
        ll h, m;
        cin >> h >> m;
        if(h == 0 && m == 0){
            cout << 0 << '\n';
        }
        ll totalMinutes = 1440;
        ll passedMinutes = h * 60 + m;
        ll ans = totalMinutes - passedMinutes;
        cout << ans << '\n';
    }
}