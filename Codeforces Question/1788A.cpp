#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int two = 0;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == 2) two++;
        }
        int leftTwo = 0;
        int k = -1;
        for(int i = 0; i<n-1; i++){
            if(arr[i] == 2) leftTwo++;
            if(leftTwo * 2 == two){
                k = i+1;
                break;
            }
        }
        cout << k << endl;
    }
}