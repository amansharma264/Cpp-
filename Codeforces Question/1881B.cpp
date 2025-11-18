#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    ll t;
    cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        
        ll sum = a + b + c;
        
        if(sum % 3 != 0) {
            cout << "NO" << '\n';
            continue;
        }
        
        ll target = sum / 3;
        
        ll need = 0;
        if(a < target) need += target - a;
        if(b < target) need += target - b;
        if(c < target) need += target - c;
        
        if(need <= 3) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
