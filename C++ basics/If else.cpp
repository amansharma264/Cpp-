#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter the value of a " << endl;
    cin>> a;

    if(a>0){
        cout<< "A is greater ";
    }
    else if(a< 0){
        cout << "A is negative ";
    }
    else{
        cout << "A is zero ";
    }
}