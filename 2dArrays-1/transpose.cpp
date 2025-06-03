#include<iostream>
using namespace std;
int main(){
    int m;
    cout << " Enter the number of rows : ";
    cin >> m;
    int n;
    cout << " Enter the number of column : ";
    cin >> n;

    int arr[m][n];
    for(int i = 0; i<=m-1; i++){
        for(int j = 0; j<=n-1; j++){
            cin >> arr[i][j];
        }
    }
    // print 
    for(int i = 0; i<=m-1; i++){ // rows
        for(int j = 0; j<=n-1; j++){ // column
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // printing transpose 
    for(int j = 0; j<n; j++){
        for(int i = 0; i<m; i++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}