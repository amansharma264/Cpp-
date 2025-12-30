#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    while(b != 0){
        ans += a/b;
        a %= b;
        swap(a,b);
    }
    cout << ans << '\n';
}