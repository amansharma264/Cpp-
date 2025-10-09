#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

void twinPermutations(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i = 0; i<n; i++){
        b[i] = n + 1 - a[i];
    }
    for(int i = 0; i<n; i++){
        cout << b[i] << " ";
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        twinPermutations();
    }
}