#include<iostream>
using namespace std;
int main(){
    int m;
    cout << " Enter the number of rows/column : ";
    cin >> m;

    int arr[m][m];
    for(int i = 0; i<=m-1; i++){
        for(int j = 0; j<=m-1; j++){
            cin >> arr[i][j];
        }
    }
    // print 
    for(int i = 0; i<=m-1; i++){ // rows
        for(int j = 0; j<=m-1; j++){ // column
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // transpose in the same matrix
    for(int i = 0; i<=m-1; i++){ // rows
        for(int j = i+1; j<=m-1; j++){ // column
            // swappping of i, j and j, i
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
       
    }
    // printing transpose 
    for(int i = 0; i<=m-1; i++){
        for(int j = 0; j<=m-1; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}