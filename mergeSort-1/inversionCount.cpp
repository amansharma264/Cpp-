#include<iostream>
#include<vector>
using namespace std;

int inversion(vector<int>& a, vector<int>& b){
    int count = 0;
    int i = 0; // a
    int j = 0; // b
    while(i < a.size() && j < b.size()){
        if(a[i] > b[j]){
            count += (a.size()-i);
            j++;
        }
        else{ // a[i] <= b[j]
            i++;
        }
    }
    return count;
}

void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0; // a 
    int j = 0; // b
    int k = 0; // res
    while(i<a.size() && j<b.size()){
        if(a[i] < b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i == a.size()){ // a is reach at end
        while(j < b.size()){
            res[k++] = b[j++];
        }
    }
     if(j == b.size()){ // a is reach at end
        while(i < a.size()){
            res[k++] = a[i++];
        }
    }
}

int mergeSort(vector<int>& v){
    int count = 0;
    int n = v.size(); // 5, 1, 3, 0, 4, 9, 6
    if(n == 1) return 0;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    // copy pasting karenge aab iske elements ko
    for(int i = 0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i = 0; i<n2; i++){
        b[i] = v[i+n1];
    }
    // magic aka recursion
    count += mergeSort(a);
    count += mergeSort(b);
    // count the inversions 
    count += inversion(a,b);
    // merge
    merge(a,b,v);
    return count;
}

int main(){
    int arr[] = {5,1,3,0,4,2,6}; // Total answer = 7
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n); // same as array , copy 
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << mergeSort(v);
}