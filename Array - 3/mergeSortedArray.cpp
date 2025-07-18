#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> merge(vector<int> & arr1, vector<int> & arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> arr3(m+n);

    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // arr3

    while(i<=n-1 && j <= m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{ // arr2[j] < arr1[i]
            arr3[k] = arr2[j];
            j++;
            k++;
        }

    }
    // for remaining elements 
    if(i==n){  // arr1 ke sare elements utha chuka huu 
        while(j<=m-1){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j == m){ // arr 2 ke sare elements full hogyee 
        while(i<=n-1){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }
    return arr3;
}

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);

    vector<int> arr3 = merge(arr1, arr2);

    for(int i = 0; i<arr3.size(); i++){
        cout << arr3[i] << " ";
    }
    return 0;
    
}