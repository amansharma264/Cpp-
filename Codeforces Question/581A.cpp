#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
        ll a , b;
        cin >> a >> b;
        ll fashionDays = min(a,b);
        ll remainingSocks = abs(a-b);
        ll sameSocks = remainingSocks/2;

        cout << fashionDays << " " << sameSocks << '\n';
    }
