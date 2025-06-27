#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n = 3;
    int arr[n];
    for(int i = 0; i<3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << ((arr[2] - arr[1]) + (arr[1] - arr[0]));
    return 0;
}