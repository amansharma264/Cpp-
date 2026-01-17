#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long

void amanSharma264(){
    fastio();
    ll n;
    cin >> n;
    vector<int> a(n);
    for(ll i = 0; i<n; i++){
        cin >> a[i];
    }
    bool flag = true;
    for(ll i = 0; i+ 1 <n; i++){
        if((a[i] % 2) == (a[i+1] % 2)){
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << '\n';
}

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        amanSharma264();
    }
}
