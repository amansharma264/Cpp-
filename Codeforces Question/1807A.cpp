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
        ll a, b, c;
        cin >> a >> b >> c;
        if(a + b == c){
            cout << "+" << '\n';
        }
        else{
            cout << "-" << '\n';
        }
    }
}