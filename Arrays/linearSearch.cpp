#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    // input
    for(int i = 0; i<=n-1; i++){
        cin >> arr[i];
}
    int x;
    cout << "Enter the element you want to search";
    cin >> x;

    // search
    // check mark
    bool flag = false;
    for(int i = 0; i<=n-1; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag == true) cout << "ELement found";
    else cout << "404 element not found";
}