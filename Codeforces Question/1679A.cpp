#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

void AvtoBus(){
    ll n;
    cin >> n;
    if(n % 2 == 1 || n < 4){
        cout << -1 << '\n';
        return;
    }
    ll maxBus = n/4;
    ll minBus = n/6;
    if(n % 6 != 0){
        minBus++;
    }
    cout << minBus << " " << maxBus << '\n';
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        AvtoBus();
    }
    
}