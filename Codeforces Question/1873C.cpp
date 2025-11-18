#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define ld long double
#define endl '\n'

int main(){
    fastio();
    ll t;
    cin >> t;
    while(t--){
        vector<string> grid(10);
        for(ll i = 0; i<10; i++){
            cin >> grid[i];
        }
        ll total = 0;
        for(ll i = 0; i<10; i++){
            for(ll j = 0; j<10; j++){
                if(grid[i][j] == 'X'){
                    ll ring = min({i, j, 9-i, 9-j});
                    total += (ring + 1);
                }
            }
        }
        cout << total << '\n';
    }
}