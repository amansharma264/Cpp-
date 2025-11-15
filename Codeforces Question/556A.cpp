#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count = 0;
    ll count1 = 0;
    for(ll i = 0; i<n; i++){
        if(s[i] == '0'){
            count++;
        }
        else{
            count1++;
        }
    }
    ll ans;
    if(count > count1){
        ans = count - count1;
    }
    else{
        ans = count1 - count;
    }
    cout << ans << '\n';
}