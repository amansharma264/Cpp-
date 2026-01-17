#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

void amanSharma264(){
    ll n;
    cin >> n;
    vector<ll> ans(n);
    for(ll i = 0; i<n; i++){
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end());
    for(ll i = 0; i+1 < n; i++){
        if(ans[i] == ans[i+1]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}


int main(){
    ll t;
    cin >> t;
    while(t--){
        amanSharma264();
    }
}