#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define ld long double
#define endl '\n'

int main(){
    fastio();
    int t;
    cin >> t;
    while(t--){
        ll n, k, x;  // Use long long
        cin >> n >> k >> x;

        ll minSum = k * (k + 1) / 2;
        ll maxSum = k * n - (k * (k - 1)) / 2;

        if (x >= minSum && x <= maxSum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}