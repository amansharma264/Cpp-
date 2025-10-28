#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    ll q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        ll nameS[26] = {0};
        ll nameT[26] = {0};
        for(ll i = 0; i<n; i++){
            nameS[s[i] - 'a']++;
            nameT[t[i] - 'a']++;
        }
        bool flag = true;
        for(ll i = 0; i<26; i++){
            if(nameS[i] != nameT[i]){
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}