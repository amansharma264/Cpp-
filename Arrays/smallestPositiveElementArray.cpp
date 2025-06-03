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

    int x = 1;
    bool flag = false;
    for(int i = 0; i <=n-1; i++){
        if(arr[i] != x){
            cout << x << endl;
            flag = true;
            break;
        }
        else x++;
    }
    if(flag == false) cout << x << endl;
    return 0;
}
