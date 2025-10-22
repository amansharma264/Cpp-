#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int cuttoff = a[n-1];
    int count = 0;

    for(int i = 0; i<n; i++){
        if(a[i] >= cuttoff && a[i] > 0){
            count++;
        }
    }
    cout << endl;
}