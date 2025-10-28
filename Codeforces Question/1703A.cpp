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
        if ((s[0] == 'Y' || s[0] == 'y') &&
            (s[1] == 'E' || s[1] == 'e') &&
            (s[2] == 'S' || s[2] == 's')) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
