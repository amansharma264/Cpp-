#include <iostream>
#include <vector>
#include<algorithm>
#include<math.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    long long diff = INT_MAX;
    for(int i = 0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            cout << 0 << endl;
            return;
        }
        else{
            diff = min(diff, (arr[i+1] - arr[i]));
        }
    }
    cout << diff/2 + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
