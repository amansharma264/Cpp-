// Write a program to store roll number and marks obtained by 4 students side by side in a matrix 

#include<iostream>
using namespace std;
int main(){
    // roll number, marks 
    // 4 students 
    int arr[2][4];
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<=3;j++ ){
            cin >> arr[i][j];

        }
    }
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<=3;j++ ){
            cout << arr[i][j];
            
        }
        cout << endl;
    }
}