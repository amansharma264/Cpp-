#include<iostream>
using namespace std;
int main(){
    int n = 100;
    cout << "Enter any number between 1 to 100 :" << endl;
    cin >> n;

    for(int i = 0; i<n; i++){
        if(n > 10 && n < 10){
            cout << "Cold" << endl;
        }
    }
}