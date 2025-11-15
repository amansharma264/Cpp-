#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    ll n, m;
    cin >> n >> m;
    ll days = 0;
    ll socks = n;
    while(socks > 0){
        days++;
        socks--;
        if(days % m == 0){
            socks++;
        }
    }
    cout << days << '\n';
}