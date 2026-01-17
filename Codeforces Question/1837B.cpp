#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long

void amanSharma264(){
    fastio();
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int mx = 1;
    int curr = 1;
    for(ll i = 1; i<n; i++){
        if(s[i] == s[i-1]) curr++;
        else curr = 1;
        mx = max(mx, curr); 
    }
    cout << mx + 1 << '\n';
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        amanSharma264();
    }
}
