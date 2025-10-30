#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll sum1 = s[0] - '0' + s[1] - '0' + s[2] - '0';
        ll sum2 = s[3] - '0' + s[4] - '0' + s[5] - '0';
        if(sum1 == sum2){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
