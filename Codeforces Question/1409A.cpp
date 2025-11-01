 #include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    ll t; 
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll diff = abs(b - a);
        cout << (diff + 9) / 10 << "\n";
    }

    return 0;
}
    
    