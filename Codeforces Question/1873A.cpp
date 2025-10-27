#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    fastio();
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "abc"){
            cout << "YES\n";
            continue;
        }
        bool flag = false;
        for(ll i = 0; i<3; i++){
            for(ll j = i + 1; j< 3; j++){
                swap(s[i], s[j]);
                if(s == "abc") flag = true;
                swap(s[i], s[j]);
                if(flag) break;
            }
            if(flag) break;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}
