#include <bits/stdc++.h>
using namespace std;

void prefixMinSuffixMax(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    vector<int> prefix(n);
    vector<int> suffix(n);
    prefix[0] = a[0];
    for(int i = 1; i<n; i++){
        prefix[i] = min(prefix[i-1], a[i]);
    }
    suffix[n-1] = a[n-1];
    for(int i = n-2; i>= 0; i--){
        suffix[i] = max(suffix[i+1], a[i]);
    }
    for(int i = 0; i<n; i++){
        if(prefix[i] == a[i] || suffix[i] == a[i]){
            cout << "1";
        }
        else{
            cout << "0";
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        prefixMinSuffixMax();
    }
}