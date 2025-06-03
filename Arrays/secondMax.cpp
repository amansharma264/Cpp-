#include<iostream>
using namespace std;
#include<climits>
int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    // input 
    int arr[n];
    for(int i = 0; i<=n-1; i++){
        cin >> arr[i];
    }

    // int max = arr[0];
    int max = INT_MIN;
    for(int i = 0; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }

    int smax = INT_MIN;
    for(int i = 0; i<=n-1; i++){
        if(arr[i] != max && smax<arr[i]) smax = arr[i];
    }
    // cout << max << endl;
    cout << smax << endl;
}