#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n - row + 1){
            cout<< col << " ";
            col = col + 1;
        }
        int star1 = row - 1;
        while(star1){
            cout << "*" << " ";
            star1 = star1 - 1;
        }
        int star2 = row - 1;
        while(star2){
            cout << "*" << " ";
            star2 = star2 - 1;
        }
        int cols = 1;
        while(cols<=n - row + 1){
            cout << n - row - cols + 2 << " ";
            cols = cols + 1;
        }
        cout << endl;
        row = row + 1;
    }
}