#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i<n; i++){
        cin >> a[i];
    }
    stack<pair<ll, ll>> st;
    for(ll i = 0; i<n; i++){
        while(!st.empty() && st.top().first >= a[i]){
            st.pop();
        }
        if(st.empty()){
            cout << 0 << " ";
        }
        else{
            cout << st.top().second << " ";
        }
        st.push({a[i], i+1});
    }
}