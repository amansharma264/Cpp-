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
        string a, b;
        cin >> a >> b;
        
        swap(a[0], b[0]);

        cout << a << " " << b << endl;
    }
    return 0;
}
