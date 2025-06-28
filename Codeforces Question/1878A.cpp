#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }

        long long numberisPresent = 0;
        for(int i = 0; i<n; i++){
            if(a[i] == k){
                numberisPresent = 1;
                break;
            }
        }
        if(numberisPresent)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}