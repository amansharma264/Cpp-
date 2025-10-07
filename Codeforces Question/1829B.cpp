#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    int maxBlank = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0) count++;
        else count = 0;
        maxBlank = max(maxBlank, count);
    }
    cout << maxBlank << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}