#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    for(int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }

    bool flag = false;
    for(int i = 0; i <= n - 1; i++){
        for(int j = i + 1; j <= n - 1; j++){ 
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag == false) 
        cout << "No Duplicates" << endl;
    else 
        cout << "Duplicates Found" << endl;

    return 0;
}
