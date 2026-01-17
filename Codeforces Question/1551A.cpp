#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long

void amanSharma264(){
    ll n;
    cin >> n;
    
    ll c2 = n/3;
    ll c1 = n - 2*c2;

    ll c2b = c2 + 1;
    ll c1b = n - 2*c2b;

    if(c1b >= 0 && abs(c1b - c2b) < abs(c1 - c2)){
        c1 = c1b;
        c2 = c2b;
    }

    cout << c1 << " " << c2 << '\n';
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        amanSharma264();
    }
}
