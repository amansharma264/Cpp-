#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll minimum = min({a,b,c});
        ll maximum = max({a,b,c});
        ll median = a + b + c - minimum - maximum;
        cout << median << '\n';
    }   
}