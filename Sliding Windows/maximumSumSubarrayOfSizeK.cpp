// Maximum Sum Subarray of Size K
#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxSum = INT_MIN;
    int maxidx = -1;
    int sum = 0;
    for(int i = 0; i<k; i++){
        sum += arr[i];
    }
    maxSum = sum;
    int i = 1;
    int j = k;
    // sliding window algorithm 
    while(j < n){
        sum = sum + arr[j] - arr[i-1];
        if(maxSum < sum){
            maxSum = sum;
            maxidx = i;
        }
        i++;
        j++;
    }
    cout << maxSum << " " << maxidx << endl;
}