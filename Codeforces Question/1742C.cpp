#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define endl '\n'

int main(){
    fastio();
    int t;
    cin >> t;
    while(t--){
        vector<string> grid(8);
        for(int i = 0; i < 8; i++){
            cin >> grid[i];
        }

        bool redLast = false;

        for(int i = 0; i < 8; i++){
            bool allR = true;
            for(int j = 0; j < 8; j++){
                if(grid[i][j] != 'R'){
                    allR = false;
                    break;
                }
            }
            if(allR){
                redLast = true;
                break;
            }
        }

        if(redLast) cout << 'R' << '\n';
        else cout << 'B' << '\n';
    }
    return 0;
}
