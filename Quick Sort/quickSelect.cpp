#include<iostream>
using namespace std;

int partition(int arr[], int si, int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i = si+1; i<= ei; i++){
        // if(i == (si+ei)/2) continue;
        if(arr[i] <= pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si], arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i < pivotIdx && j > pivotIdx){
        if(arr[i] <= pivotElement) i++;
        if(arr[j] > pivotElement) j--;
        
        else if(arr[i] > pivotElement && arr[j] <= pivotElement){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } 
    return pivotIdx;
}

int kthSmallest(int arr[], int si, int ei, int k){
    int pivotIdx = partition(arr, si,ei); 
    if(pivotIdx+1 == k) return arr[pivotIdx];
    else if(pivotIdx+1 < k) return kthSmallest(arr,pivotIdx+1,ei,k);
    else return kthSmallest(arr,si,pivotIdx-1,k);
}

int main(){
    int arr[] = {5,18,82,20,7,6,31,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int k = 4;
    cout << kthSmallest(arr, 0,n-1,k);
    
}