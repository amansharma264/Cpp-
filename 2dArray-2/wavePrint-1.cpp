#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout << "Enter rows of 1st matrix : ";
    cin >> m;
    int n;
    cout << "Enter cols of 1st matrix : ";
    cin >> n;
    int arr[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // wave print
    for(int i = 0; i<n; i++){
        if(i%2==0){
            for(int j = 0; j<n; j++){
                cout << arr[i][j] << " ";
            }
        }
        else{ // i = 1, 3, 5
            for(int j = n-1; j>=0; j--){
                cout << arr[i][j] << " ";
            }
        }
    }
    
}