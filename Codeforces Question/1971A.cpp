#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long

void amanSharma264(){
    ll x, y;
    cin >> x >> y;
    if(x < y){
        cout << x << " " << y << '\n';
    }
    else{
        cout << y << " " << x << '\n';
    }
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        amanSharma264();
    }
}
