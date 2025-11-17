#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define ld long double
#define endl '\n'

int main(){
    fastio();
    ll n, m;
    cin >> n >> m;
    ll moves = min(n,m);
    if(moves % 2 == 1){
        cout << "Akshat" << '\n';
    }
    else{
        cout << "Malvika" << '\n';
    }
}