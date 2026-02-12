#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <climits>
#define ll long long int
using namespace std;

ll dp[105][105];

ll g(vector<int>& colors, int i, int j){
    ll result = 0;
    for(int m = i; m <= j; m++){
        result = (result + colors[m]) % 100;
    }
    return result;
}

ll f(vector<int>& colors, int i, int j){
    if(i == j) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    ll result = LLONG_MAX;
    for(int k = i; k < j; k++){
        result = min(result,
                     f(colors, i, k)
                   + f(colors, k + 1, j)
                   + g(colors, i, k) * g(colors, k + 1, j));
    }
    return dp[i][j] = result;
}

ll fbu(vector<int> & colors){
    memset(dp, 0, sizeof dp);
    int n = colors.size();
    for(int len = 2; len <=n; len++){
        for(int i = 0; i<=n-len; i++){
            int j = i + len - 1;
            ll result = LLONG_MAX;
    for(int k = i; k < j; k++){
        result = min(result,
                     dp[i][k]
                   + dp[k+1][j]
                   + g(colors, i, k) * g(colors, k + 1, j));
    }
    dp[i][j] = result;
        }
    }
    return dp[0][n-1];
}

int main(){
    int n;
    while(cin >> n){
        vector<int> colors(n);
        for(int i = 0; i < n; i++){
            cin >> colors[i];
        }
        memset(dp, -1, sizeof(dp));
        // cout << f(colors, 0, n - 1) << "\n";
        cout << fbu(colors) << "\n";
    }
}
