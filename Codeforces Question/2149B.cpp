#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int ans = 0;
    for(int i = 0; i<n; i+=2){
        ans = max(ans, a[i+1] - a[i]);
    }
    cout << ans << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}