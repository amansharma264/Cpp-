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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll count = 0;
        if(b > a) count++;
        if(c > a) count++;
        if(d > a) count++;

        cout << count << endl;
    }
    return 0;
}
