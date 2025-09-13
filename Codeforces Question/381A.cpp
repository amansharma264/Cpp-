#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int left = 0;
    int right = n-1;
    int sereja = 0;
    int dima = 0;

    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    bool flag = true;
    while(left <= right){
        int ans;
        if(a[left] > a[right]){
            ans = a[left];
            left++;
        }
        else{
            ans = a[right];
            right--;
        }
        if(flag){
            sereja += ans;
        }
        else{
            dima += ans;
        }
        flag =! flag;
    }
    cout << sereja << " " << dima << endl;
}